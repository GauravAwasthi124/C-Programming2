#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *p,n;
    scanf("%d",&n);
    p = (int *)calloc(n,sizeof(int));
    if (p == NULL){
        printf("Memory Not Allocated\n");
    }
    {
        /* code */
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("Enter the values\n");
        scanf("%d",p+i);
        printf("%d\n", *(p+i));
    }
    

    return 0;
}