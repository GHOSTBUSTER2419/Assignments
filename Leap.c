//Program to check whether a year is a leap year or not.

#include<stdio.h>
void main()
{
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if (year%400==0 || year%4==0 && year%100!=0)
    {
        printf("The year is a leap year");
    }  
    else
    {
        printf("The year is not a leap year");
    }
}
