#include<stdio.h>
// BY call by Reference
void PrintAddress(int* n)
{
    printf("%p\n",&(*n));
}
int main()
{
    int n;
    printf("Enter the n:--");
    scanf("%d", &n);
    printf("%p\n",&n);
    PrintAddress(&n);
    return 0;
}