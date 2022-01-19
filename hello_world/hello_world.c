#include <stdio.h>

int add_together(int a, int b) {
	int result = a + b;
	return result;
}

/*	Structure Declarations:
	structures are used to declare new types. Structures are several variables
	bundled together into a single package.

	we can use struture to represent more complex data types, for example to represent a point 
	in 2D space we could create a structure called 'point' that packs together two float
	(decimal) values called x and y. to declare structures we can use the 'struct'
*/

int main(int argc, char** argv) {
	puts("Hello, World!");
	int r = add_together(10, 5);
	printf("%d\n", r);
	return 0;
}