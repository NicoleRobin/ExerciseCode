#include <WINSOCK2.H>
#include <stdio.h>

void main()
{
	// ����socket��
	WORD wVersionRequested;
	WSADATA wsaData;
	int err;
	
	wVersionRequested = MAKEWORD( 1, 1 );
	
	err = WSAStartup( wVersionRequested, &wsaData );
	if ( err != 0 )
	{
		return;
	}
	if ( LOBYTE( wsaData.wVersion ) != 1 ||
        HIBYTE( wsaData.wVersion ) != 1 ) 
	{
		WSACleanup( );
		return; 
	}
	// build socket
	SOCKET sockClient = socket(AF_INET, SOCK_DGRAM, 0);
	// send data to server
	SOCKADDR_IN addrSrv;
	addrSrv.sin_addr.S_un.S_addr = inet_addr("127.0.0.1");
	addrSrv.sin_family = AF_INET;
	addrSrv.sin_port = htons(6000);
	
	sendto(sockClient, "Hello server", strlen("Hello server") + 1, 0, 
		(SOCKADDR*)&addrSrv, sizeof(SOCKADDR));

	closesocket(sockClient);
	WSACleanup();
}