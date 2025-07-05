#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char input[50];
    fgets(input,50, stdin);
    for(int i=0;i<strlen(input);i++)
    {
        if(input[i]>=97 && input[i]<=123)
        input[i]-=32;
    }
    puts(input);
    return 0;
}