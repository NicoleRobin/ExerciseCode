#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char **argv)
{
    int server = socket(AF_INET, SOCK_STREAM, 0);
    sockaddr_in addrServer;
    bzero(&addrServer, sizeof(addrServer));
    addrServer.sin_family = AF_INET;
    addrServer.sin_port = htons(8080);
    addrServer.sin_addr.s_addr = INADDR_ANY;

    bind(server, (sockaddr*)&addrServer, sizeof(addrServer));
    listen(server, 5);

    while (1)
    {
        int client;
        socklen_t len = sizeof(addrServer);
        client = accept(server, (sockaddr*)&addrServer, &len);
        
        if (client == -1)
        {
            return -1;
        }
        pid_t pid;
        if ((pid = fork()) == 0)
        {
            close(server);
            sockaddr_in addrClient,addrPeer;
            socklen_t lenClient, lenPeer;
            lenClient = sizeof(addrClient);
            lenPeer = sizeof(addrPeer);
            getsockname(client, (sockaddr*)&addrClient, &lenClient);
            cout << inet_ntoa(addrClient.sin_addr) << ":" << ntohs(addrClient.sin_port) << endl;
            cout << inet_ntoa(addrPeer.sin_addr) << ":" << ntohs(addrPeer.sin_port) << endl;
            while (1);
        }
        else if (pid < 0)
        {
            return -1;
        }
        close(client);
    }
}
