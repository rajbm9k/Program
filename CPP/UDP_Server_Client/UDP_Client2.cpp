/* Simple UDP Client Program */

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <netinet/in.h>
#include <netdb.h>
#include <unistd.h>
#include <stdlib.h>
#include <errno.h>

#define SERVER_IP "127.0.0.1"
#define UDP_PORT 34343
#define MAXLINE 512

// Client Code
int main(){
    char buffer[MAXLINE];
    const char *message = "Msg from Client";
    int sockfd, n;
    struct sockaddr_in servaddr;
    struct hostent *host;
   // int servaddr_len;
    int opt = 1;

    //clear servaddr
   // bzero(&servaddr,sizeof(servaddr));

    host = gethostbyname("localhost");
    if(host == NULL){
        printf("gethostbyname is NULL \n");
        exit(EXIT_FAILURE);
    }
    memset(&servaddr, 0, sizeof(servaddr)); 

    servaddr.sin_family = AF_INET;
   // servaddr.sin_addr.s_addr = inet_addr(SERVER_IP);
    servaddr.sin_addr.s_addr = INADDR_ANY;
    servaddr.sin_port = htons(UDP_PORT);

// create datagram socket

sockfd = socket(AF_INET,SOCK_DGRAM,IPPROTO_UDP);
if( sockfd < 0) {
    printf("Socket creation error: %s \n", strerror(errno));
    exit(EXIT_FAILURE);
}

if(setsockopt(sockfd,SOL_SOCKET, SO_REUSEADDR, (const void *)&opt, sizeof(opt))< 0){
    printf("Setting reuseaddr option failed with error %s \n", strerror(errno));
    exit(EXIT_FAILURE);
}

// request to send datagram
//no need to specify server address in sendto
// connect stores the peers IP and Port
printf("Sending this message: %s \n", message);
int sent_bytes = sendto(sockfd,(const char*)message, strlen(message),0, (struct sockaddr*)&servaddr,sizeof(servaddr));

if(sent_bytes < 0){
    printf("Error while sending msg %s\n", strerror(errno));
    exit(EXIT_FAILURE);
}

//servaddr_len = 0;
socklen_t len;
//waiting for response
int recv_bytes = recvfrom(sockfd, (char *)buffer, sizeof(buffer), 0,(struct sockaddr*)&servaddr, &len); 
if ( recv_bytes < 0 ){
    printf("Error while recving msg %s\n",strerror(errno));
    exit(EXIT_FAILURE);
} else {
    buffer[recv_bytes] = '\0';
    printf("Msg from server: %s \n", buffer);

}

// close the descriptor
close(sockfd);

return 0;
}

