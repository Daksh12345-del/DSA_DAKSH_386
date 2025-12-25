#include<stdio.h>
void countsort(int n, int arr[])
{
    int max = arr[0];
    for(int i = 0; i < n; i++)
    {
        if(arr[i] > max)
            max = arr[i];
    }
    int count[max + 1];
    for(int i = 0; i <= max; i++)
    {
        count[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        count[arr[i]]++;
    }
    for(int i = 1; i <= max; i++)
    {
        count[i] = count[i] + count[i - 1];
    }
    int ans[n];
    for(int i = n - 1; i >= 0; i--)
    {
        ans[count[arr[i]] - 1] = arr[i];
        count[arr[i]]--;
    }
    for(int i = 0; i < n; i++)
    {
        arr[i] = ans[i];
    }
}
int main()
{
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for(int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    countsort(n, arr);
    printf("Sorted array: ");
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
