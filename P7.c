#include<stdio.h>
#include<string.h>
int main()
{
    char line[50];
    int counter1 =0,counter2 =0;
    printf("Enter string line\n");
    scanf("%49[^\n]",line);
    char *mover = line;
    char *pos,*temp;
    while(*mover!=' ' && *mover !='\0')
    {
        counter1++;
        mover++;
    }
    pos = line;
    while(*mover!='\0')
    {
        while (*mover == ' ') 
            mover++;
        temp = mover;
        while(*mover!=' ' && *mover !='\0')
        {
            counter2++;
            mover++;
        }
        if(*mover =='\0')
        break;
        if(counter2>counter1)
        {
            counter1 = counter2;
            pos = temp;
        }
        counter2 =0;
    }
    for(int i=0;i<counter1;i++)
    printf("%c",*(pos+i));
    return 0;
}