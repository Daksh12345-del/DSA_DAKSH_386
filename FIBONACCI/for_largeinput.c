#include<stdio.h>
int data[1000];
int fibo(int n)
{
    if(n==1||n==2)
    {
        return data[n]=n-1;
    }
    else {if (data[n]==0)
    return data[n]=fibo(n-1)+fibo(n-2);}
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("%d\t",fibo(i));
    }
}