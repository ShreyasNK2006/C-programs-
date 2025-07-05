#include<stdio.h>
#include<string.h>
int main()
{
    char input[50];
    printf("Enter a line\n");
    fgets(input,50, stdin);
    for(int i =0;i<strlen(input);i++)
    {
        if(input[i]!=' ')
        printf("%c",input[i]);
        else
        printf("\n");
    }
    return 0;
}