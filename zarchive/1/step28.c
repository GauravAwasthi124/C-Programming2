#include<stdio.h>


int main()
{
    
    int a ;
    printf("Enter the a:--");
    scanf("%d",&a);
    
    int i = 1;
    do
    {
        printf("Natural Number:--%d\n",i);
        i++;
    } while (i<=a);
    
    return 0;
}