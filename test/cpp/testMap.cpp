/*******************************************************************************
* File Name		: testMap.cpp
* Author		: zjw
* Email			: emp3XzA3MjJAMTYzLmNvbQo= (base64 encode)
* Create Time	: 2015年07月20日 星期一 18时02分25秒
*******************************************************************************/

#include <iostream>
#include <cstring>
#include <map>
using namespace std;

struct SqlNode
{
	char ip[20];
	int port;
};

int main(int argc, char **argv)
{
	map<SqlNode, map<SqlNode, int> > mapTest;
	map<int, SqlNode> mapip;
	SqlNode node;
	memset(node.ip, 0, sizeof(node.ip));
	strcpy(node.ip, "192.168.0.160");
	node.port = 8080;
	
	mapip.insert(make_pair<int, SqlNode>(1, node));
	//  mapIp.insert(make_pair(node, 1));
	//mapTest.insert(make_pair(node, mapIp));

	//node.port = 1000;
	//mapTest.insert(make_pair(node, mapIp));

	return 0;
}
