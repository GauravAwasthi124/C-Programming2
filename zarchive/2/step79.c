#include<stdio.h>
#include<string.h>
int main()
{
    // int array[10];
    // printf("Enter the 10 Numbers");
    // for (int i = 0; i <= 9; i++)
    //     scanf("%d",&array[i]);
    // int sum = 0;
    // for (int i = 0; i <=9; i++)
    // {
    //     sum = sum + array[i];
    // }
    // printf("%d\n", sum);
    int num;
        int sum = 0;
    for (int i = 1; i <=10; i++)
    {
        
        sum = sum+i;
        printf("%d\n", sum);
    }
    
    
    return 0;
}