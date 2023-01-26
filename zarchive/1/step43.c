#include<stdio.h>
// Swap the number in call by Reference
void swap_two_numbers(int* a , int* b)
{
   int t = *a;
   *a = *b;
   *b = t;
   printf("The a is:--%d\n", *a);
   printf("The b is:--%d\n", *b);
}
int main()
{
    int x , y;
    printf("Enter the x:--");
    scanf("%d", &x);

    printf("Enter the y:--");
    scanf("%d", &y);

    swap_two_numbers(&x , &y);
    printf("The x:--%d\n",x);
    printf("The y:--%d\n",y);
    return 0;
}