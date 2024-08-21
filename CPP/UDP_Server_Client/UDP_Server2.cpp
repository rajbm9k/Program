/* Simple UDP Server Program */

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

#define UDP_PORT 34343
#define MAXLINE 512

// Server code

int main(){
    char buffer[MAXLINE];
    const char *message = "Ack from Server";
    int sockfd,n;
    struct sockaddr_in servaddr;
    struct sockaddr_in cliaddr;
   // int cliaddr_len;
    int opt = 1;

    // clear servaddr
    // bzero(&servaddr,sizeof(servaddr));
    // bzero(&cliaddr, sizeof(cliaddr));

    //clear datagram socket
    sockfd = socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);
    if(sockfd < 0) {
        printf("Socket Creation Error %s \n", strerror(errno));
        exit(EXIT_FAILURE);
    }
    printf("Sockfd : %d \n", sockfd);

    memset(&servaddr, 0, sizeof(servaddr)); 
	memset(&cliaddr, 0, sizeof(cliaddr)); 

    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = INADDR_ANY;
    servaddr.sin_port = htons(UDP_PORT);

    if(setsockopt(sockfd,SOL_SOCKET, SO_REUSEADDR, (const void *)&opt,sizeof(opt)) < 0){
        printf("Setting broadcast option failed with error %s \n", strerror(errno));
        exit(EXIT_FAILURE);
    }

    if ( bind(sockfd, (const struct sockaddr *)&servaddr,sizeof(servaddr)) < 0 ){
        printf("Socket bind failed .. %s \n", strerror(errno));
        close(sockfd);
        exit(EXIT_FAILURE);
    }

    while(1){
        //wait for client
        socklen_t cliaddr_len; 
        cliaddr_len = sizeof(cliaddr);

        bzero(buffer, sizeof(buffer));
        printf("Waiting for Clients.. on socket: %d \n", sockfd);
        int recv_bytes = recvfrom(sockfd,(char *)buffer , sizeof(buffer), 0, (struct sockaddr *)&cliaddr,&cliaddr_len);

        if(recv_bytes < 0){
            printf("Error while recving msg %s\n" , strerror(errno));
            exit(EXIT_FAILURE);
        } else {
            buffer[recv_bytes] = '\0';
            printf("Bytes recv: %d %s\n", recv_bytes, buffer);
            }
        // request to send datagram
        // no need to specify server address in sendto
        // connect stores the peers IP and port
        int sent_bytes = sendto(sockfd, (const char *)message, strlen(message), 0, (const struct sockaddr *)&cliaddr,cliaddr_len); 

        if(sent_bytes < 0){
            printf("Error while sending msg %s\n", strerror(errno));
            //exit(0);
        }
        
    }
    
return 0;
}