#include<stdio.h>
int sortcheck(int arr[],int len,int cond,int i)
{
    if(i==len-2)
    return cond;
    if(arr[i]<arr[i+1])
    {
        cond =1;
        return sortcheck(arr,len,cond,i+1);
    }
    else
    {
        cond = -1;
        return cond;
    }
}
int main()
{
    int arr[100],n;
    printf("Enter size of array (<=100) ");
    scanf("%d",&n);
    for(int i =0;i<n;i++)
    scanf("%d",&arr[i]);
    int cond = sortcheck(arr,n,0,0);
    if(cond ==1)
    printf("The array is sorted in ascending order\n");
    else
    printf("The array is not sorted\n");
    return 0;
}