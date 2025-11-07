#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>

#define PORT 5000
#define BUFFER_SIZE 1024

int main() {
    int sock = 0;
    struct sockaddr_in serv_addr;
    char buffer[BUFFER_SIZE];
    char message[BUFFER_SIZE];

    // Create socket
    sock = socket(AF_INET, SOCK_STREAM, 0);
    if (sock < 0) {
        perror("Socket creation error");
        return -1;
    }

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(PORT);

    // Convert IPv4 address
    if (inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr) <= 0) {
        perror("Invalid address");
        return -1;
    }

    // Connect to server
    if (connect(sock, (struct sockaddr *)&serv_addr, sizeof(serv_addr)) < 0) {
        perror("Connection failed");
        return -1;
    }
    printf("Connected to server.\n");

    while (1) {
        // Send message
        printf("Client: ");
        fgets(message, BUFFER_SIZE, stdin);
        message[strcspn(message, "\n")] = 0; // Remove newline
        send(sock, message, strlen(message), 0);
        if (strcmp(message, "exit") == 0) {
            printf("Client exited.\n");
            break;
        }

        // Receive response
        memset(buffer, 0, BUFFER_SIZE);
        read(sock, buffer, BUFFER_SIZE);
        if (strcmp(buffer, "exit") == 0) {
            printf("Server exited.\n");
            break;
        }
        printf("Server: %s\n", buffer);
    }

    close(sock);
    return 0;
}
