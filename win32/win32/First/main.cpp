#include <windows.h>
#include <string>

void RegisterMyClass();
LRESULT CALLBACK MainWndProc(
	HWND hwnd, 
	UINT uMsg, 
	WPARAM wParam, 
	LPARAM lParam);

int WINAPI WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow)
{
	if (hPrevInstance != NULL)
	{
		MessageBox(NULL, TEXT("ֻ������һ��ʵ��"), TEXT("��ʾ"), 0);
		return 0;
	}
	// ע�ᴰ����
	RegisterMyClass();

	// ��������
	HWND hwnd = CreateWindow(
		TEXT("MainWindow"), // ����
		L"�ҵ�Ӧ�ó���", // ���ڱ�������
		WS_POPUP, // ���������ʽ
		0, //38, // ��������ڸ�����x����
		0, //20, // ��������ڸ�����y���� GetSystemMetrics (SM_CXSCREEN)����ȡ��Ļ���
		GetSystemMetrics(SM_CXSCREEN), //480, // ���ڵĿ�� GetSystemMetrics(SM_CYSCREEN)����ȡ��Ļ�߶�
		GetSystemMetrics(SM_CYSCREEN), //250, // ���ڵĸ߶�
		NULL, // û�и�����
		NULL, // û�в˵�
		hInstance, // ��ǰӦ�ó����ʵ�����
		NULL); // û�и�������

	if (hwnd == NULL)
	{
		return 0;
	}

	// ��ʾ����
	ShowWindow(hwnd, SW_NORMAL);

	// ���´���
	UpdateWindow(hwnd);

	// ��Ϣѭ��
	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return 0;
}

void RegisterMyClass()
{
	WNDCLASS wc;

	wc.lpszClassName = TEXT("MainWindow");
	wc.lpfnWndProc = MainWndProc;
	wc.style = CS_OWNDC | CS_VREDRAW | CS_HREDRAW;
	wc.hInstance = NULL;
	wc.hIcon = LoadIcon(NULL, IDI_APPLICATION);
	wc.hCursor = LoadCursor(NULL, IDC_ARROW);
	/*
	��ɫ��ˢ (HBRUSH)(COLOR_WINDOW + 1);
	��ɫ��ˢ 
	*/
	wc.hbrBackground = (HBRUSH)(GetStockObject(GRAY_BRUSH));
	wc.lpszMenuName = TEXT("FirstWin32");
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;

	RegisterClass(&wc);
}

void 

LRESULT CALLBACK MainWndProc(HWND hwnd,
	UINT uMsg,
	WPARAM wParam,
	LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_PAINT:
		PAINTSTRUCT ps;
		BeginPaint(hwnd, &ps);
		DrawText(ps.hdc, L"Robin", wcslen(L"Robin"), &(ps.rcPaint), DT_CENTER);
		EndPaint(hwnd, &ps);
		break;
	case WM_DESTROY:
		PostQuitMessage(uMsg);
		break;
	default:
		return DefWindowProc(hwnd, uMsg, wParam, lParam);
		break;
	}
}