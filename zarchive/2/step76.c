#include<stdio.h>
#include<string.h>


int main()
{
    int income;
    printf("Enter your income:--");
    scanf("%d",&income);

    if (income>250000 && income<=500000)
    {
        printf("You will pay total:--%d",((income-250000)/100)*5);
        
    }

    else if (income>500000 && income <=1000000)
    {
        printf("You will pay total:--%d",((income-500000)/100)*10);
        
    }
    
    else if (income>1000000 && income <=100000000000)
    {
        printf("You will pay total:--%d",((income-1000000)/100)*30);
        
    }
    
    else
    {
        printf("Wrong number");
    }
    return 0;
}