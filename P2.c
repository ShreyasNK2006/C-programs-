#include<stdio.h>
#include<string.h>
int main()
{
    char input[50];
    printf("Enter a line\n");
    fgets(input,50, stdin);
    int counter =0;
    char *set ="aeiouAEIOU";
    for(int i=0;i<strlen(input);i++)
    {
        if(strchr(set,input[i])!=NULL)
        counter++;
    }
    printf("The number of vowels are %d",counter);
    return 0;
}