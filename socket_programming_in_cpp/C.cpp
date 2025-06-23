#include <cstring>
#include <iostream>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
using namespace std;
int main()
{
	int clientSocket = socket(AF_INET,SOCK_STREAM,0);

	sockaddr_in clientAddress;
	clientAddress.sin_family = AF_INET;
	clientAddress.sin_port = htons(8080);
 	clientAddress.sin_addr.s_addr = INADDR_ANY;

	connect(clientSocket,(struct sockaddr*)&clientAddress,sizeof(clientAddress));

	const char* message = "Hello, server!";
 	send(clientSocket,message,strlen(message),0);

	close(clientSocket);

	return 0;
}
