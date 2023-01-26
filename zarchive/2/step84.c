#include<stdio.h>
int swap(int *x,int *y)
{
    *x = *x+*y;
    *y = *x-*y;
    *x = *x-*y;
  
}
int main()
{
    int a,b;
    printf("Enter a & b\n");
    scanf("%d %d\n",&a,&b);
    swap(&a,&b);
      printf("Value of a:%d\n", a);
    printf("Value of b:%d\n", b);
    return 0;
}