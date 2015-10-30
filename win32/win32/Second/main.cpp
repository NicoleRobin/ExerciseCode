#include <Windows.h>

void RegisterMyClass(HINSTANCE hInstance);
LRESULT CALLBACK MainWinProc(
	HWND hwnd,
	UINT uMsg,
	WPARAM wParam,
	LPARAM lParam);

int CALLBACK WinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPSTR lpCmdLine,
	int nCmdShow
	)
{
	// 注册窗口类
	RegisterMyClass(hInstance);

	// 创建窗口
	HWND hwnd = CreateWindow(
		TEXT("MainWindow"),
		TEXT("SecondWindow"),
		WS_OVERLAPPEDWINDOW, 
		20, 
		40, 
		480, 
		300, 
		0, 
		0, 
		hInstance, 
		NULL);

	if (hwnd == NULL)
	{
		return 0;
	}

	ShowWindow(hwnd, nCmdShow);
	UpdateWindow(hwnd); // 仅仅发送一个WM_PAINT消息

	MSG msg;
	while (GetMessage(&msg, NULL, 0, 0))
	{
		TranslateMessage(&msg);
		DispatchMessage(&msg);
	}

	return 0;
}

void RegisterMyClass(HINSTANCE hInstance)
{
	WNDCLASS wc;
	wc.style = CS_HREDRAW | CS_VREDRAW;
	wc.cbClsExtra = 0;
	wc.cbWndExtra = 0;
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW + 1);
	wc.hCursor = LoadCursor(hInstance, IDC_ARROW);
	wc.hIcon = 0;
	wc.hInstance = hInstance; // 这个参数设置为NULL有什么区别
	wc.lpfnWndProc = MainWinProc;
	wc.lpszClassName = TEXT("MainWindow");
	wc.lpszMenuName = NULL;

	RegisterClass(&wc);
}

LRESULT CALLBACK MainWinProc(
	HWND hwnd,
	UINT uMsg,
	WPARAM wParam,
	LPARAM lParam)
{
	switch (uMsg)
	{
	case WM_PAINT:
		PAINTSTRUCT ps;
		BeginPaint(hwnd, &ps);
		DrawText(ps.hdc, L"朋友，你好。", wcslen(L"朋友，你好。"), &(ps.rcPaint), DT_CENTER);
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
