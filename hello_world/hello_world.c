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
	(decimal) values called x and y. to declare structures we can use the 'struct' keyword in
	conjunction with the 'tyepdef' keyword.
	our declaration would look like this.
*/

typedef struct {
	float x;
	float y;
} point 
/*
we should place this definition above any function that wish to use it. this type
is no different to the built in types, and we can use it in all the same ways.
to access an individual field we use a dot ., followed by the name of the filed, 
such as x.
*/

/*
point p;
p.x = 0.1;
p.y = 10.0;
*/

/*
Pointers:
a pointer is a variation on a normal type where the type name is suffixed with 
an asterisk. for example we could declare a pointer to an integer by writing
'int*'. 'char** argv' is a pointer type, its a pointer to pointer character.
and its used as the input to the main function.

pointers are used for a whole number of different things such as for strings or lists.

*/

float lenght = sqrt(p.x * p.x * p.y * p.y);
int main(int argc, char** argv) {
	puts("Hello, World!");
	int r = add_together(10, 5);
	printf("%d\n", r);
	return 0;
}