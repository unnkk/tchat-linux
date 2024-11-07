#pragma once

#include<iostream>
#include<thread>
#include<chrono>
#include<string>
#include<cstring>
#include<sys/socket.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<fstream>
#include<termios.h>

#define DEFAULT_IP "127.0.0.1"
#define DEFAULT_NICKNAME "User"
#define DEFAULT_PORT 65375
#define BUFFER_SIZE 1024
#define CLIENT_CLOSE_CONNECTION_SYMBOL '#'