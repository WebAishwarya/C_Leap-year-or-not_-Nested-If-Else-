/*
    Program to Check if a year is leap year or not
*/

#include<stdio.h>

int main()
{
    printf("Program to Check if a year is leap year or not by using *Nested If Else*\n\n");

    int year;

    printf("Enter a year : ");
    scanf("%d", &year);

    if (year % 4 == 0) 
    {
        if (year % 100 == 0) 
        {
            if (year % 400 == 0)
            {
                printf("%d is a leap year", year);
            }
            else
            {
                printf("%d is not a leap year", year);
            }
        }
        else
            printf("%d is a leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }

    return 0;
}
