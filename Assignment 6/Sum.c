#include<stdio.h>
int sumofN(int n)
{
    if(n==1)
    return 1;
    return n + sumofN(n-1);
}
int main()
{
    int n;
    printf("Enter a number - ");
    scanf("%d",&n);
    int sum = sumofN(n);
    printf("Sum of natural numbers upto %d = %d\n",n,sum);
return 0;
}