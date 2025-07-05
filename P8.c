#include<stdio.h>
#include<string.h>
int main()
{
    char input[50];
    fgets(input,50,stdin);
    input[strlen(input)-1]='\0';
    int i=0;
    while(*(input+i)!='\0')
    {
        int j=i;
        if(*(input+i)==' ')
        {
            while(j<strlen(input)-1)
            *(input+j++) = *(input+j);
            *(input+j)='\0';
        }
        i++;
    }
    printf("%s",input);
    return 0;
}