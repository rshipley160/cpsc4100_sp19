#include <stdio.h> 
/* 
Preprocessor directive 
At compile-time, the include statement is replaced with function declarations from the requested library
*/

/*
	The main method in C
	Can be many return types - void, int, etc
	returned integer can be used to signal how program execution went - 0=good, etc
*/
int main (int args, char *argv[])
{
	//Formatted print statement in C - can use escape characters like in Java
	printf("Hello World!");
	return 0;
}
