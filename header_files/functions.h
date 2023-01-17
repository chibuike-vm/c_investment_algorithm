#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

void confirm_action(void)
{
	if ((strcmp(onBoard1.action, "yes") == 0))
	{
		printf("\nDo you also agree with the companies' terms and conditions?"dddddd);
		printf(" (\"yes\" or \"no\"): ");
		scanf("%9s", onBoard1.action);
	}
	else
	{
		printf("\nPlease make up your mind, you can do this!\n");
	}

	if ((strcmp(onBoard1.action, "yes") == 0))
	{
		printf("\nThank you for your confirmation, you deserve the best!\n\n");
	}
	else
	{
		printf("\nKindly try again\n");
	}
}


void investCommit(struct investor *onBoard2)
{
	if (strcmp(onBoard2->action, "yes") == 0)
	{
		printf("Please, kindly input your investment capital: ");
		scanf("%d", &onBoard2->capitalInvestment);
		printf("\nYou have successfully invested %d", onBoard2->capitalInvestment);
		printf(" Naira at 20%% Returns On Investment after 5 Secs\n");
	}
}


void investmentDuration(struct investor *onBoard3)
{
	thisTime = time(NULL);

	struct tm *regionalTime = localtime(&thisTime);

	sleep(5);

	after5Secs = time(NULL);

	onBoard3->profits = 0;

	onBoard3->timeDiff = difftime(after5Secs, thisTime);

	onBoard3->timeDiff = difftime(after5Secs, thisTime);
}


void feedBack(void)
{
	investCommit(&onBoard1);

	investmentDuration(&onBoard1);

	onBoard1.profits = 0;

	if (onBoard1.timeDiff == 5)
	{
		onBoard1.profits += (onBoard1.capitalInvestment * 0.2);

		onBoard1.profitsAndCapital = (onBoard1.profits + onBoard1.capitalInvestment);
		printf("\nThe total profit earned after 5 seconds plus the intial");
		printf(" capital invested is: %d Naira\n\n", onBoard1.profitsAndCapital);

	}
}

#endif /* _FUNCTIONS_H_ */
