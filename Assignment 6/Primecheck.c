#include<stdio.h>
#include<math.h>
int primecheck(int n,int i,int count)
{
    if(count>=1)
    return count;
    if(i<=sqrt(n))
    {
        if(n%i==0)
        count++;
        i++;
    }
    else
    return count;
    return primecheck(n,i,count);
}
int main()
{
    int n;
    printf("Enter the number- ");
    scanf("%d",&n);
    int cond = primecheck(n,2,0);
    if(cond>0)
    printf("The number is not prime\n");
    else
    printf("The number is prime\n");
    return 0;
}