#include<stdio.h>
int add(int x,int y)
{
    int z;
    z = x+y;
    printf("%d\n", z);
}

void main()
{
    int a,b,c;
    printf("Enter the two variable:");
    scanf("%d %d",&a,&b);
    int d;
    d = add(a,b);
    
}