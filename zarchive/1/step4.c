#include<stdio.h>

int main()
{
    float centigreate_to_farenheit = 32;
    float centigreate;
    printf("Enter the digit:--");
    scanf("%d", &centigreate);
    float formula = centigreate * 9/5 + centigreate_to_farenheit;
    printf("The change from centigreate to farenheit:--%.2f\n",formula );
    return 0;
}