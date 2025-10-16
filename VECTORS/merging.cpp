#include <iostream>
#include<vector>
using namespace std;

void merge(arr1[], int m,arr2[], int n, int merged[]) {
    int i = 0, j = 0, k = 0;
    while (i < m && j < n) {
        if (arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }
    while (i < m)
        merged[k++] = arr1[i++];
    while (j < n)
        merged[k++] = arr2[j++];
}

int main() {
    vector<int> v1 = {1, 3, 5, 7};
    vector<int> v2 = {2, 4, 6, 8, 10};
    vector<int> v3=(v1.size()+v2.size())
    int m = sizeof(arr1) ;
    int n = sizeof(arr2) ;
    int merged[m + n];
    merge(v1.begin(),v1.end(),v2.begin(),v2.end(),v3.begin())

    // merge(arr1[], m,arr2, n, merged);

    printf("Merged array: ");
    for (int i = 0; i < m + n; i++)
        printf("%d ", merged[i]);
     printf("\n");

    printf("%d m",m);
    printf("%d n",n);

    return 0;
}