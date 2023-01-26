#include<stdio.h>
int Printstar(int a , int b)
{
    return a + b;
}

int Printstar_1(int a , int b)
{
    if (a >b)
    {
        return a-b;
    }
    
    else
    {
        return b-a;
    }
    
}
int main()
{
    int x , y;
    printf("Enter the x:--");
    scanf("%d\n", &x);

    printf("Enter the y:--");
    scanf("%d\n", &y);

    int c;
    c = Printstar(x,y);
    printf("%d\n", c);
        
    int d;
    d = Printstar_1(x,y);
    printf("%d\n", d);
    return 0;
}