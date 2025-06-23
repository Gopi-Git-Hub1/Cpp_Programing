#include <cstring>
#include <iostream>
#include <sys/socket.h>
#include <netinet/in.h>
#include <unistd.h>
using namespace std;
int main()
{
	// Creating the Server Socket
	int serverSocket = socket(AF_INET, SOCK_STREAM, 0);
	// Defining Server Address
	sockaddr_in serverAddress;
	serverAddress.sin_family = AF_INET;
	serverAddress.sin_port = htons(8080);
	serverAddress.sin_addr.s_addr = INADDR_ANY;
	// Binding the Server Socket
	bind(serverSocket, (struct sockaddr*)&serverAddress, sizeof(serverAddress));
	// Listening for Connections
	listen(serverSocket, 5);
	// Accepting a Client Connection
	int clientSocket = accept(serverSocket, nullptr, nullptr);
	// Receiving Data from the Client
	char buffer[1024] = {0};
	recv(clientSocket, buffer, sizeof(buffer), 0);
	cout << "Message from client: " << buffer << endl;
	// Closing the Server Socket
	close(serverSocket);
	return 0;
}
