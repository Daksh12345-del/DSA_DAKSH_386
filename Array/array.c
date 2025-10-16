/*missing number in an array
#include <stdio.h>
int main()
{
    int n,i,a=0,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
            sum+=arr[i];
    }
    a=(n*(n+1))/2;
    if(sum<a){
    printf("The missing number is %d\n",a-sum);}
    else{
        printf("%d",sum-a);
    }
    return 0;

}

Duplicate Number
#include <stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
    }
    if(count>0)
    {
        printf("The element is duplicate %d\n",count);
    }
    else{
        printf("The element is not duplicate\n");
    }
    return 0;
}

Reverse of an array*/

#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arra[n];
    int arrb[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arra[i]);
    }
    for(i=0;i<n;i++)
    {
        (arrb[0]=arra[n-i-1]);

    }
    for(i=0;i<n;i++)
    {
        printf("%d",arrb[i]);
    }
    return 0;

}

 



