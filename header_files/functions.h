#ifndef _FUNCTIONS_H_
#define _FUNCTIONS_H_

/**
 * confirmAction - confirmation of user input
 * @verifyAction: Struct data type used for verifying the user string input
 *
 * Description: This function is used to confirm the user input and can only be
 * called to execute when the user input is a literal string "yes"
 *
 * Return: This function returns the literal string "yes"
 */
struct investor confirmAction(struct investor verifyAction)
{
	if ((strcmp(verifyAction.action, "yes") == 0))
	{
		printf("\nDo you also agree with the companies' terms and conditions?");
		printf(" (\"yes\" or \"no\"): ");
		scanf("%9s", verifyAction.action);
	}
	else
	{
		printf("\nPlease make up your mind, you can do this!\n");
	}

	if ((strcmp(verifyAction.action, "yes") == 0))
	{
		printf("\nThank you for your confirmation, you deserve the best!\n\n");
	}
	else
	{
		printf("\nKindly try again\n");
	}

	return (verifyAction);
}


/**
 * investCommit - Accepts the capital deposit
 * @deposit: This struct data type stores the user integer deposit amount
 *
 * Description: This function is used to confirm if the string literal is "yes"
 * and then proceed to accept the capital deposit of the user
 *
 * Return: This function returns the capital deposit of the user
 */
struct investor investCommit(struct investor deposit)
{
	if (strcmp(deposit.action, "yes") == 0)
	{
		printf("Please, enter an investment deposit between 1000 - 500000");
		printf(" (in Dollars): ");
		scanf("%f", &deposit.depositAmt);
	}
	if ((deposit.depositAmt >= 1000) && (deposit.depositAmt <= 500000))
	{
		printf("\nYou have successfully invested $%.2f", deposit.depositAmt);
		printf(" at 20%% Returns On Investment after 5 Secs\n");
	}
	else
	{
		printf("\nUnsuccessful! NOTE:\nMinimum Deposit In Dollars:");
		printf(" 1000\nMaximum Deposit in Dollars: 500000\n\n");
	}
	return (deposit);
}


/**
 * investmentDuration - Processes investment duration time at 5 seconds
 *
 * Description: This function proceses the investment duration time which is
 * mapped to 5 seconds
 *
 * Return: This function returns the different in time duration of 5 seconds
 */
struct investor investmentDuration(void)
{
	struct investor duration;

	duration.thisTime = time(NULL);

	sleep(5);

	duration.after5Secs = time(NULL);

	duration.profits = 0;

	duration.timeDiff = difftime(duration.after5Secs, duration.thisTime);

	duration.timeDiff = difftime(duration.after5Secs, duration.thisTime);

	return (duration);
}


/**
 * feedBack - Calls the other functions and do some tasks
 *
 * Description: This function calls all the other functions above to carry out
 * their designated tasks and then processes the ROI of the user deposit after
 * 5 seconds as well as the sum of the user's total deposit and ROI and
 * subsequently prints the standard output to the console.
 */
void feedBack(void)
{
	struct investor confirmAct, iCommit, roiDuration, act;

	scanf("%9s", act.action);

	confirmAct = confirmAction(act);

	iCommit = investCommit(confirmAct);

	if (((strcmp(iCommit.action, "yes")) == 0) && ((iCommit.depositAmt >= 1000)
	&& (iCommit.depositAmt <= 500000))) /* End of condition */
	{
		roiDuration = investmentDuration();

		iCommit.profits = 0;

			if (roiDuration.timeDiff == 5)
			{
				iCommit.profits += (iCommit.depositAmt * 0.2);

				iCommit.profitsAndCapital = (iCommit.profits + iCommit.depositAmt);
				printf("\nThe total profit earned after 5 seconds plus the intial");
				printf(" capital invested is: $%.2f\n\n", iCommit.profitsAndCapital);

			}
	}
}

#endif /* _FUNCTIONS_H_ */
