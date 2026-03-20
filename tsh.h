#ifndef _TSH_H
#define _TSH_H

char *secret = "123456789";
char *cb_host = NULL;

#define SERVER_PORT 4444
short int server_port = SERVER_PORT;

#define CONNECT_BACK_HOST  "localhost"
#define CONNECT_BACK_DELAY 5

#define GET_FILE 1
#define PUT_FILE 2
#define RUNSHELL 3

#endif /* tsh.h */
