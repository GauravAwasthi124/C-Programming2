#include<stdio.h>

void sum(float a , float b)
{
    printf("The sum:--%.2f\n", a+b);
}
void product(float a , float b)
{
    printf("The Product of two number is:--%.2f\n", a*b);
}

void average(float a , float b)
{
    printf("The average of two number is:--%.2f\n",(a+b)/2);
}
int main()
{
    float x , y;
    printf("Enter the x:--");
    scanf("%f\n",&x);

    printf("Enter the y:--");
    scanf("%f\n",&y);
    sum(x,y);
    product(x,y);
    average(x,y);
    return 0;
}