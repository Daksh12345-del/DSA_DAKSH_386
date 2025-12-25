#include<stdio.h>
int main(){
    int n,i,a,found=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf(" Enter the element you want to search");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            found=1;
            break;
        }

    }
    if(found==1)
    {
        printf("The number is found at %d",i);
    }
    else
    {
        printf("The element is not found");
    }
    return 0;
}