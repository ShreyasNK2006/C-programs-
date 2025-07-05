#include<stdio.h>
int powval(int a,int b,int res)
{
    if(b==0)
    return res;
    return powval(a,b-1,res*=a);
}
int main()
{
    int a,b;
    printf("Enter a number and the power to which it is to be raised - ");
    scanf("%d%d",&a,&b);
    int res = powval(a,b,1);
    printf("%d raised to power %d is %d\n",a,b,res);
    return 0;
}
