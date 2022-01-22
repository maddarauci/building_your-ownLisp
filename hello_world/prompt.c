#include <stdio.h>
#include <stdlib.h>

//#include <editline/readline.h>
//#include <editline/history.h>
#include <"D:\building_your-ownLisp\libedit\history.c">
#include <"D:\building_your-ownLisp\libedit\readline\readline.h">
/* declare a buffer for user input of size 2048 */
static char input[2048];

int main(int argc, char** argv) {
	/* Print Version and Exit Information */
	puts("Lispy Version 0.0.0.0.1");
	puts("Press Ctrl+c to Exit\n");

	// an inifinte loop
	while(1) {
		//fputs("Lispy> ", stdout);
		// output the prompt and get input
		char* input = readline("Lispy> ");

		// add input to history
		add_history(input);

		// read a line of user input to maximum size 2048
		fgets(input, 2048, stdin);

		// echo input back to user 
		printf("No you're a %s", input);

		// free retrieved input 
		free(input);
	}
	return 0;
}