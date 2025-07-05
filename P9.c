#include<stdio.h>
#include<string.h>
int main()
{
    char input[50],rep,val;
    printf("Enter string\n");
    fgets(input,50,stdin);
    input[strlen(input)-1] ='\0';
    printf("Enter character to be replaced\n");
    scanf("%c",&rep);
    printf("Enter new character\n");
    scanf(" %c",&val);
    int i =0;
    while(*(input+i)!='\0')
    {
        if(*(input+i)==rep)
        *(input+i)=val;
        i++;
    }
    printf("String after replacement is %s",input);
    return 0;
}