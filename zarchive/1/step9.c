#include<stdio.h>


int main()
{
    float Income;
    printf("Enter your Income:--");
    scanf("%f" , &Income);
    printf("Your Return Income:--%.2f\n",Income);

    if (Income >=250000 && Income <= 500000)
    {
        printf("Total tax:--%.2f\n",(Income * 5)/100);
    }
    
    else if (Income >= 500000 && Income <=1000000)
    {
        printf("Total tax:--%.2f\n",(Income * 20)/100);
    }

    else if (Income >= 1000000)
    {
        printf("Total tax:--%.2f\n",(Income * 30)/100);
    }
    
    
    return 0;
}