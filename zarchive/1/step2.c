#include<stdio.h>


int main()
{
    // Using hard coded input
    int side_a = 5 ;
    printf("Length of a rectangular:%d\n",side_a);
    int side_b = 6;
    printf("Length of a rectangular:%d\n",side_b);

    printf("The area of rectangular is %d\n", side_a * side_b);

    // Using inputs supplied by the user

    int a , b;
    printf("Enter the side a:--");
    scanf("%d", &a);

    printf("Enter the side b:--");
    scanf("%d", &b);

    printf("The area of rectangular is:--%d\n", a * b);
    return 0;
}