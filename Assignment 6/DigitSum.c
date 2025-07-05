#include<stdio.h>
int sumofdigit(int n,int sum)
{
    if(n==0)
    return sum;
    sum+=n%10;
    return sumofdigit(n/10,sum);
}
int main()
{
    int n;
    printf("Enter a number - ");
    scanf("%d",&n);
    printf("The sum of digits of a number is %d\n",sumofdigit(n,0));
    return 0;
}