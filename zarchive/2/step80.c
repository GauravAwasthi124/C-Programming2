#include<stdio.h>
#include<string.h>
int main()
{
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int ma[3][3];
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
        printf("\n");
     int mat1[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    for (int i = 0; i<3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t", mat[i][j]);
        }
        printf("\n");
    }
        printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            ma[i][j] = mat[i][j] + mat1[i][j];
            printf("%d\t", ma[i][j]);

        }
            printf("\n");
        
    }
    
    return 0;
}