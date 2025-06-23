#include <iostream>
#include <cstring>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
using namespace std;
int main()
{
	int serverSocket = socket(AF_INET, SOCK_STREAM,0);

	sockaddr_in sockAddress;
	sockAddress.sin_family = AF_INET;
	sockAddress.sin_port   = htons(8080);
	sockAddress.sin_addr.s_addr = INADDR_ANY;

	bind(serverSocket, (struct sockaddr*)&sockAddress, sizeof(sockAddress));

	listen(serverSocket,5);

	int clientSocket = accept(serverSocket, nullptr,nullptr);

	char buffer[1024]={0};
	recv(clientSocket, buffer, sizeof(buffer), 0);
	cout<<"Message from client : "<<buffer<<endl;

	close(serverSocket);

	return 0;
}
