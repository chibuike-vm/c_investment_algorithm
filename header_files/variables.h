#ifndef _VARIABLES_H_
#define _VARIABLES_H_

/**
  * struct investor - Structure data type declaration
  *
  * @action: This 1st member stores the string literal entered by the user
  * @depositAmt: This 2nd member stores the deposit amount entered by the user
  * @timeDiff: This 3rd member stores the time difference of 5 seconds
  * @profits: This 4th member stores the 20% ROI of user's deposit
  * @profitsAndCapital: This 5th member stores the sum of (2nd + 4th) members
  * @thisTime: This 6th member stores the current time
  * @after5Secs: this 7th member stores the time after 5 seconds
  */
struct investor
{
	char action[10];
	float depositAmt;
	double timeDiff;
	float profits;
	float profitsAndCapital;
	time_t thisTime;
	time_t after5Secs;
};

#endif /* _VARIABLES_H_ */
