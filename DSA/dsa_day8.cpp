//decimal and binary number system conversion
// #include <iostream>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     while(n>0)
//     {
//         int rem=n%2;
//         cout<<rem;
//         n=n/2;
//     }
//     return 0;

// }

#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n>0)
    {
        int bit=n%10;
        if(bit==1)
        {
            int ans=ans+pow(2,i);
        }
        n=n>>1;
        i++;

    }
    cout<<ans;
    return 0;
}