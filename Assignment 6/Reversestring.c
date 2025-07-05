#include<stdio.h>
#include<string.h>
void rev(char arr[],int len,int i)
{
    if(i >= len/2)
    return;
    char temp;
    temp = arr[i];
    arr[i] = arr[len - i -1];
    arr[len - i -1] = temp;
    rev(arr,len,i+1);
}
int main()
{
    char arr[100];
    printf("Enter a string - ");
    scanf("%s",arr);
    rev(arr,strlen(arr),0);
    printf("Reversed string is %s\n",arr);
    return 0;
}