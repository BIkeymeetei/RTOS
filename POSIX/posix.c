#define _POSIX_SOURCE 
#define _POSIX_C_SOURCE 199309L 
#include<iostream.h>
#include <unistd.h>
int main() { 
#ifdef _POSIX_VERSION 
cout << "System conforms to POSIX: " << _POSIX_VERSION << endl; 
#else 
cout << "_POSIX_VERSION is undefined\n"; 
#endif 
return 0; 
}

