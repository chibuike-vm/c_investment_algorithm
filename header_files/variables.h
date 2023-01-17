#ifndef _VARIABLES_H_
#define _VARIABLES_H_

struct investor
{	
	char action[10];
	int capitalInvestment;
	double timeDiff;
	int profits;
	int profitsAndCapital;
};

struct investor onBoard1;

time_t thisTime;

time_t after5Secs;

#endif /* _VARIABLES_H_ */
