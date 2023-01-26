#include<stdio.h>
//Call by value
void square(int n)
{
    n = n * n;
    printf("The square is:--%d\n", n);
}
int main()
{
    int number;
    printf("Enter the number:--");
    scanf("%d", &number);
    printf("Your Selected number is:--%d\n", number);
    square(number);
    printf("Your Selected number is:--%d\n", number);
    return 0;
}