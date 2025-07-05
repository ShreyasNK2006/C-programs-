#include<stdio.h>
#include<string.h>
int concat(char *source,char * dest)
{
    if(*source !='\0')
    {
        *dest= *source;
        dest++;
        source++;
        return concat(source,dest);
    }
    *dest ='\0';
    return 0;
}
int main()
{
    char s1[10],s2[10];
    printf("Enter two strings\n");
    scanf("%s%s",s1,s2);
    concat(s2,s1+strlen(s1));
    printf("Concatanated String is %s\n",s1);
    return 0;
}