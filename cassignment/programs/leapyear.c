//Q-5. WAP to check if the given year is a leap or not.
#include<stdio.h>
int main()
{
    int year;
	printf("enter leap year");
	scanf("%d",&year);
	if(year%400==0)
	{
	 	printf("leap year");
    }
	else if (year % 100 == 0) 
	{
        printf("\n%d is not the leap year.\n", year);
    } 
	else if (year % 4 == 0)
	{
        printf("\n%d is the leap year.\n", year);
    } 
	else
	{
        printf("\n%d is not the leap year.\n", year);
    }
    return 0;
}

