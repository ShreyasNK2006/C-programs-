#include<stdio.h>
int printseq(int n,int i)
{
    if(i<=n)
    printf("%d ",i);
    if(i>n)
    return 0;
    return printseq(n,i+1);
}
int printseq2(int n)
{
    if(n!=0)
    printf("%d ",n);
    else
    return 0;
    return printseq2(n-1);
}
int main()
{
    int n;
    printf("Enter n ");
    scanf("%d",&n);
    printf("Numbers from 1 to n - ");
    printseq(n,1);
    printf("\nNumbers from n to 1 - ");
    printseq2(n);
    return 0;
}