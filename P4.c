#include<stdio.h>
#include<string.h>
int main()
{
    char input[50];
    fgets(input,50,stdin);
    char *start = input;
    for(int i =0;i<strlen(input)-1;i++)
    {
        if(*(start+i)== *(start+strlen(input)-i-2))
        continue;
        else{
            printf("Not a palindrome\n");
            return 0;
        }
    }
    printf("Palindrome\n");
    return 0;
}