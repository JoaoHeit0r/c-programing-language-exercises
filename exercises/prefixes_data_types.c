#include <stdio.h>
#include <limits.h>

int main(){
	int i1;
	short int i2;
	long int i3;
	long long int i4;
	
	printf("plain int: %zu bytes\n", sizeof(i1));
	printf("short int: %zu bytes\n", sizeof(i2));
	printf("long int: %zu bytes\n", sizeof(i3));
	printf("long long int: %zu bytes", sizeof(i4));
}