#include<stdio.h>
int maxfind(int arr[],int maxn,int i,int len)
{
    if(i==len)
    return maxn;
    if(arr[i]>maxn)
    maxn = arr[i];
    return maxfind(arr,maxn,i+1,len);
}
int main()
{
    int arr[100],n;
    printf("Enter size of array (<=100) ");
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    scanf("%d",&arr[i]);
    printf("Maximum number in array is %d\n",maxfind(arr,arr[0],0,n));
    return 0;
}