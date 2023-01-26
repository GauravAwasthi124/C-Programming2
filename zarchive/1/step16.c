#include<stdio.h>
// Arithmetic Operators
int main()
{
    int number1 , number2;
    printf("Enter the first number:--");
    scanf("%d", &number1);

    printf("Enter the second number:--");
    scanf("%d", &number2);

    printf("%d\n",number1+number2);
    if (number1>number2)
    {
        printf("%d\n",number1-number2);
    }
    else
    {
        printf("%d\n",number2-number1);
    }
    
    printf("%d\n",number1*number2);

    if (number1>number2)
    {
        printf("%d\n",number1/number2);
    }
    else
    {
        printf("%d\n",number2/number1);
    }
    
    return 0;
}