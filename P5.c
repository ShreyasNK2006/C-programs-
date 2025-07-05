#include<stdio.h>
#include<string.h>
int main()
{
    char input[50],key;
    printf("Enter string\n");
    fgets(input,50,stdin);
    printf("Enter character\n");
    key = getchar();
    int counter=0;
    char *start = input;
    for(int i=0;i<strlen(input)-1;i++)
    {
        if(*(start+i)==key)
        counter++;
    }
    printf("The frequency of %c is %d\n",key,counter);
    return 0;
}