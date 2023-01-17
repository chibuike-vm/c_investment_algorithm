#include <stdio.h>
#include <time.h>
#include <string.h>
#include <unistd.h>
#include "variables.h"
#include "functions.h"

/**
 * main - Program entry point
 *
 * Description: Prints interactive texts and takes in data needed for calling
 * for the execution of other functions.
 *
 * Return: Returns zero exit status if successfully executed
 */
int main(void)
{
	do {
		printf("\n- - - - - - - - - - - -Welcome To Stock Investment");
		printf("Company- - - - - - - - - - - -\n\n");

		printf("Warning: Stock investments might sometimes become ");
		printf("bearish with some permanent loss.\nHaving known this,");
		printf(" do you still want to invest? (\"yes\" or \"no\"): ");
		scanf("%9s", onBoard1.action);

		confirm_action();

		feedBack();

		printf("- - - - - - - - - - -Stock Investment Company,");
		printf(" Simply The Best!- - - - - - - - - - - - - -\n\n");
	} while (0);

	return (0);
}

