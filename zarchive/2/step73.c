#include<stdio.h>
#include<string.h>
// Call by value and call by reference
void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
// void swap(int a,int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b =temp;
// }
int main()
{
    int x,y;
    printf("Enter the value of x:--");
    scanf("%d",&x);
    printf("Enter the value of y:--");
    scanf("%d",&y);
    swap(&x,&y);
    printf("The value of x is:%d\n", x);
    printf("The value of y is:%d\n", y);
    
}