#include <cstdio>
#include <cstring>

using namespace std;

int main(int argc, char **argv)
{
	unsigned int a = 360*100;
	char szBuf[10] = "";

	// szBuf[4] = (a >> 8) & 0xFF;
	// szBuf[5] = (a >> 0) & 0xFF;
	szBuf[4] = a >> 8;
	printf("%d %d\n", (unsigned char)szBuf[4], (unsigned char)szBuf[5]);

	sprintf(szBuf, "%.2X", a);
	int nLen = strlen(szBuf);
	for (int i = 0; i < nLen; i++)
	{
		printf("%c ", szBuf[i]);
	}
	printf("\n");
	

	return 0;
}
