#include<stdio.h>

int main()
{
    int math1[3][3],math2[3][3],math3[3][3];
    int sum = 0;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            // printf("Enter the 9 number");
            scanf("%d",&math1[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            // printf("Enter the 9 number");
            scanf("%d",&math2[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j <3; j++)
        {
            math3[i][j] = math1[i][j] +  math2[i][j];
            printf("%d\t", math3[i][j]);
        }
        printf("\n");
    }
    return 0;
}