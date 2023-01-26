#include<stdio.h>
#include<string.h>


int main()
{
    char s[100];
    char p[100];
    printf("Enter your name\n");
    // scanf("%s",&s);
    gets(s);
    gets(p);
    strcat(s,p);
    puts(s);
    
    // int i;
    // for (size_t i = 0; i <=50; i++)
    // {
    //     printf("%c",s[i]);
    // }
    // printf("\n");
    // printf("%s\n",s );
    // printf("\n");
    // printf("%zu",strlen(s));
    // printf("%s",strrev(s));
    // printf("%s",strupr(s));
    
    return 0;
}
