#include <stdio.h>
#include<string.h>

int main()
{
	int score;
	char grade[10];
	char msg[20];
	printf("---------------------------------\n");
	printf("\nInput Score =>  ");
	scanf_s("%d", &score);

	if (score >= 80)
	{
		strcpy_s(grade, "A");
		strcpy_s(msg, "Excellent");
	}
	else if (score >= 75)
	{
		strcpy_s(grade, "B+");
		strcpy_s(msg, "Very Good");
	}
	else if (score >= 70)
	{
		strcpy_s(grade, "B");
		strcpy_s(msg, "Good");
	}
	else if (score >= 65)
	{
		strcpy_s(grade, "C+");
		strcpy_s(msg, "Fairly Good");
	}
	else if (score >= 60)
	{
		strcpy_s(grade, "c");
		strcpy_s(msg, "Fair");
	}
	else if (score >= 55)
	{
		strcpy_s(grade, "D+");
		strcpy_s(msg, "Poor");
	}
	else if (score >= 50)
	{
		strcpy_s(grade, "D");
		strcpy_s(msg, "Very Poor");
	}
	else if((score <= 49)&(score >= 0))
	{
		strcpy_s(grade, "F");
		strcpy_s(msg, "Failure");
		

	}
	else
	{
		strcpy_s(grade, "Error");
		strcpy_s(msg, "Error");

	}
	printf("\n---------------------------------\n");
	printf("\n\nYou grade is %s and you are %s \n\n", grade, msg);
	printf("\n---------------------------------\n");
	return(0);

}

