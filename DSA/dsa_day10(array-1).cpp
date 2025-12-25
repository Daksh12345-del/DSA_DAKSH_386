//HOMEWORK DAY 10 (ARRAY-1)
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cout<<"-24"<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// // void printarray 

// // int main()
// // {

// //     //declare
// //     int n[15];
// //     cout<<" Everything is fine"<<endl<<endl;
// //     return 0;

// // }
// //intialising a character array
// char ch[5];

// //homework:minimum maximum in an array
// // for minimum
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i,n;
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int min=arr[0];
//     for(i=0;i<n;i++)
//     {
//         if(arr[i]<min)
//         min=arr[i];
//     }
//     cout<<min<<endl;
//     return 0;
// }
// //for maximum
// #include <iostream>
// using namespace std;
// int main()
// {
//     int i,n;
//     cin>>n;
//     int arr[n];
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }
//     int max=arr[0];
//     for(i=0;i<n;i++)
//     {
//         if(arr[i]>max)
//         max=arr[i];
//     }
//     cout<<max<<endl;
//     return 0;
// }

//scope of the array
#include <iostream>
using namespace std;
void update(int arr[],int n)
{
    cout<<"Inside the function"<<endl;
    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;



    cout<<"Going to update the array"<<endl;
}
int main()
{
    int arr[5]={1,2,3,4,5};
    update(arr,5);
    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
//for sum of array
#include <iostream>
using namespace std;
int sum(int arr[],int n){
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}
int main()
{
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<sum(arr,n)<<endl;
    return 0;
}
// now have to understand reverse array program