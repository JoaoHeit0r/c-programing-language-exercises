#include <stdio.h>

/*Exercise 1-5.
Modify the temperature conversion program to print the table in reverse order,
that is, from 300 degrees to 0*/

int main(){

	int fahr;
	int step = 20;
	
	for (fahr = 300; fahr >=0; fahr -= step){
		printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
	}
}
