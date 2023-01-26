#include<stdio.h>
#include<string.h>


int main()
{
    int x,i,sum;
    sum = 0;
    printf("Enter the number:--");
    scanf("%d",&i);
    while (i>0)
    {
        sum=sum+(i%10)*(i%10)*(i%10);
        i/= 10;
    }

    printf("the sum:--%d\n", sum);

    if (sum == x)
    {
        printf("number");
    }
    else
    {
        printf("digit");
    }
    
    
    
    return 0;
}