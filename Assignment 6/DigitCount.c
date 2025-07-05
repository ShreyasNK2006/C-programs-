#include<stdio.h>
int count(int n,int countd)
{
    if(n==0)
    return countd;
    countd++;
    return count(n/10,countd);
}
int main()
{
    int n;
    printf("Enter number - ");
    scanf("%d",&n);
    printf("The digit count is %d\n",count(n,0));
    return 0;
}