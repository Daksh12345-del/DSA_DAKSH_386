#include<stdio.h> 
#include<stdbool.h> 
int main() 
{ 
   int n, key; 
   printf("Enter number of elements: "); 
   scanf("%d", &n); 
   int arr[n]; 
   printf("Enter elements: "); 
   for (int i = 0; i < n; i++) 
   { 
       scanf("%d",&arr[i]); 
    } 
    printf("Enter the element to search: "); 
    scanf("%d",&key); 
    int low = 0, high = n - 1, mid; 
    bool found = false; 
    while (low <= high) 
   { 
       mid = (low + high) / 2; 
       if (arr[mid] == key) 
      { 
           printf("Element found at index %d\n",mid); 
           found = true; 
           break; 
      } 
      else if (arr[mid] < key) 
      { 
            low = mid + 1; 
      } 
      else 
      { 
           high = mid - 1; 
      } 
   } 
  if (!found) 
  { 
         printf("Element not found!"); 
  } 
  return 0; 
} 

// vector <int> v;
// bool binary_search(v.begin(),v.end(),value){
//     vector <int> v;
//     while (true){
//         cin>>value;
//         if(value==-1)
//         break;
//         v.push_back(value);
//     }
//     if(binary_search(v.begin(),v.end(),ele))
//     cout<<"Element found";
//     else
//     cout<<Element not found
// }
// // vector <int> v;


