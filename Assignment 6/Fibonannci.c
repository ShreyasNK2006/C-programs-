#include<stdio.h>
int fibonanci(int n)
{
    if(n == 1)
    return 1;
    if(n == 0)
    return 0;
    return fibonanci(n-1) + fibonanci(n-2);
}
int main()
{
    int n;
    printf("Enter the number of terms - ");
    scanf("%d",&n);
    if(n >=1)
        printf("0 ");
    for(int i =1;i<n;i++)
    printf("%d ",fibonanci(i));
    return 0;
}