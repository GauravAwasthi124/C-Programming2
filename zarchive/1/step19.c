#include<stdio.h>
// Bitwise Operator
int main()
{
    int a , b;
    printf("Enter the a:--");
    scanf("%d", &a);

    printf("Enter the b:--");
    scanf("%d", &b);

    printf("%d\n", a&b);
    printf("%d\n", a|b);
    printf("%d\n", a^b);
    return 0;
}