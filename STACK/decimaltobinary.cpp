#include <iostream>
#define MAX 100
using namespace std;
int top=-1;
int stack[MAX];
int num;
void push()
{
    if(top>=MAX)
    {
        cout<<"OVERFLOW"<<endl;
    }
    else{
        int rem,power=1,decimal=0;
        while(num>0){
            rem=rem%10;
            num=num/10;
            decimal+=rem*power;
            power=power*2;
            push(decimal);
        }
    }
}
int main()
{
    cout<<"Enter the number:"<<endl;
    cin>>num;
    int stack[n];
}