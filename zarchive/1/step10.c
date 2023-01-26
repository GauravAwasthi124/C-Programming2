#include<stdio.h>
//Leap Year System
int main()
{
    int year;
    printf("Enter the year:--");
    scanf("%d", &year);

    if (year%4 == 0)
    {
        printf("You Select Leap year");
    }
    
    else
    {
        printf("You did't select leap year");
    }
    
    return 0;
}