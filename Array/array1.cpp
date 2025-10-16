#include <iostream>
using namespace std;
void traverse(int arr[],int n)
{
    cout<<"Array elements are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int insert(int arr[],int n,int x,int pos)
{
    for(int i=n-1;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=x;
    return n+1;
}
int deletee(int arr[],int n,int pos)
{
    for(int i=pos;i<n-1;i++)
    {
        arr[i]=arr[i+1];
    }
    return n-1;
}
int main()
{
    int n,arr[100],x,pos,choice;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the elements of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    do{
    cout<<"1.Traverse \n 2.Insert \n 3.Delete \n 4.Exit"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
            traverse(arr,n);
            break;
        case 2:
            cout<<"Enter the element to be inserted and position"<<endl;
            cin>>x>>pos;
            n=insert(arr,n,x,pos);
            break;
        case 3:
            cout<<"Enter the position to be deleted"<<endl;
            cin>>pos;
            n=deletee(arr,n,pos);
            break;
        case 4:
            cout<<"Exit"<<endl;
            break;
        default:
            cout<<"Invalid choice"<<endl;
            break;
    }}

            while(choice!=4);
            return 0;

    }