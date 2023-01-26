#include<stdio.h>
#include<string.h>


int main()
{
    int marks[10],sum=0;
    printf("Enter the marks of 10 students:\n\n");
    for (int i = 0; i <=9; i++)
    {
        printf("Marks of %d student:",i+1);
        scanf("%d",&marks[i]);
        sum += marks[i];
    }
    int average =sum/10;
    printf("The average marks of 10 students are %d", average);
    return 0;
}