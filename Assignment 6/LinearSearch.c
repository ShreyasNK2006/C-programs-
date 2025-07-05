#include<stdio.h>
int linearsearch(int arr[],int key,int len,int i)
{
   if(i==len)
   return -1;
   if(arr[i]==key)
   return i;
   return linearsearch(arr,key,len,i+1);
}
int main()
{
int arr[100];
int n;
printf("Enter the size of the array\n");
scanf("%d",&n);
printf("Enter the values of the array\n");
for(int i =0;i<n;i++)
{
scanf("%d",&arr[i]);
}
int key,pos;
printf("Enter the value to be searched- ");
scanf("%d",&key);
pos = linearsearch(arr,key,n,0);
if(pos>=0)
printf("Element found at position = %d\n",pos);
else
printf("ELement does not exist in the array\n");
return 0;
}