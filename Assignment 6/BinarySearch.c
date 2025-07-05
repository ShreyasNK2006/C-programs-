#include<stdio.h>
int binarysearch(int arr[],int key,int lb,int ub)
{
    if(lb>ub)
    return -1;
    int mid = (lb+ ub)/2;
    if(arr[mid]==key)
    return mid;
    if(arr[mid]>key)
    return binarysearch(arr,key,lb,mid-1);
    else if(arr[mid]<key)
    return binarysearch(arr,key,mid+1,ub);
}
int main()
{
int arr[100];
int n;
printf("Enter the size of the array (<=100)\n");
scanf("%d",&n);
printf("Enter the values of the array in sorted order\n");
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
printf("Enter the value to be searched ");
int key,pos;
scanf("%d",&key);
int lowerbound = 0,upperbound = n-1;
pos = binarysearch(arr,key,lowerbound,upperbound);
if(pos <0)
{
printf("The keyb value doesn't exist in the array\n");
}
else if(pos>=0)
printf("The key value exists in the array at position %d\n",pos);
return 0;
}