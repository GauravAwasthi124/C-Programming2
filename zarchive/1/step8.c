#include<stdio.h>

int main()
{
    float Hindi , English , Mathematics;
    printf("Enter your Hindi marks:--");
    scanf("%f", &Hindi);

    printf("Enter your English marks:--");
    scanf("%f", &English);

    printf("Enter your Mathematics marks:--");
    scanf("%f", &Mathematics);

    float total = Hindi + English + Mathematics;
    printf("Total:--%.2f\n", total);
    float percentage = (total * 100)/300;
    printf("Percentage is:--%.2f\n", percentage);

    if (percentage >= 40 && Hindi >=33 && English >=33 && Mathematics >=33)
    {
        printf("Pass");
    }

    else
    {
        printf("Fail");
    }
    return 0;
}