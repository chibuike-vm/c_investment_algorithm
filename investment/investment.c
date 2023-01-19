#include <stdio.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include "../header_files/variables.h"
#include "../header_files/functions.h"

/**
 * main - Program entry point
 *
 * Description: Prints the company's header and footer texts to the console and
 * then calls the feedBack function which in turn activates a chain reaction of
 * calling other function to carry out their respective designated tasks
 *
 * Return: Returns zero exit status if successfully executed
 */
int main(void)
{
	printf("\n- - - - - - - - - - - - -WELCOME TO STOCK INVESTMENT");
	printf(" COMPANY- - - - - - - - - - - - - -\n\n");

	printf("Warning: Stock investments might sometimes become ");
	printf("bearish with some permanent loss.\nHaving known this,");
	printf(" do you still want to invest? (\"yes\" or \"no\"): ");

	feedBack();

	printf("- - - - - - - - - - - -STOCK INVESTMENT COMPANY, SIMPLY THE");
	printf(" BEST!- - - - - - - - - - - -\n\n");

	return (0);
}

