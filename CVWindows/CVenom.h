// Some Macros.
#define RAW 0
#define HEX 1
#define DEC 2
#define BIN 3
#define TCP 4
#define UDP 5

// Headers To Include 
#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <thread>

#include <windows.h>
#include <winsock2.h>

// Accessing Some Functions From Different Namespaces.
using		std::string;
using       std::remove;

// Custom Data Types And Typedefs
typedef void (*function)(int, int);
struct c_malware_stat_t{
	char	name[256];
	char*	path;

	size_t  size;
};

// Global Data For Some CVenom's Functionalities.
char**						_argv__;
int							_argc__;
struct c_malware_stat_t 	Current;

// Some Functions For Initializing The Library.
void cvinit(int argc, char** argv){
	_argv__=argv;
	_argc__=argc;
	
	return;
	
}

void cvexit(int x){
	exit(x);
}