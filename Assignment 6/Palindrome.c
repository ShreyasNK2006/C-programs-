#include<stdio.h>
#include<string.h>
int check(char arr[],int size)
{
   for(int i =0;i<size;i++)
   {
      if(arr[i] == arr[size-i-1])
      continue;
      else
      return -1;
      }
      return 1;
      }
int main()
{
char arr[100];
printf("Enter the string - ");
scanf("%s",arr);
int pal = check(arr,strlen(arr));
if(pal==1)
printf("%s is palindrome\n",arr);
else
printf("%s is not a palindrome\n",arr);
return 0;
}

