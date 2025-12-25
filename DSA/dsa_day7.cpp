// /*Bitwise Operators
//   Bitwise & means multiply
//   Bitwise | means add (or)
//   Bitwise ^ means xor
//   Bitwise ~ means not
//   left shift<< means multiply by 2
//   right shift>> means divide by 2
// */
#include <iostream>
using namespace std;
int main()
{
  int a = 2, b = 3;
//   cout << (a & b) << endl;
//   cout << (a | b) << endl;
//   cout << (~a) << endl;
//   cout << (a ^ b) << endl;
//   cout << (a << 1) << endl; // left shift
  cout << (b >> 1) << endl; // right shift
  
  // in negative numbers left shift and right shift works differently depends on compiler
  // increment and decrement operators
  // i++=post increment
  //++i=pre increment
  // i--=post decrement
  //--i=pre decrement

  // int i=7;
  // cout<<i++<<endl; // prints 7, i becomes 8
  // cout<<++i<<endl; // i becomes 9, prints 9
  // cout<<i--<<endl; // prints 9, i becomes 8
  // cout<<--i<<endl; // i becomes 7, prints 7
  // return 0;

  //for loop

// #include <iostream>
// using namespace std;
// int main() {
//   int i,sum=0;
//   for(i=1;i<=10;i++)
//   {
//     sum=sum+i;
//   }
//   cout<<sum<<endl;
//   return 0;
// }

//Fibonacci series
// #include <iostream>
// using namespace std;
// int main() {
//   int i,t1=0,t2=1,n,t3;
//   cin>>n;
//   if(n==1||n==2){
//     cout<<1<<endl;
//   }
//   else{
//     for(i=1;i<=n-2;i++)
//     {
//       cout<<t1<<endl;
//       cout<<t2<<endl;
//       t3=t1+t2;
//       cout<<t3<<endl;
//       t1=t2;
//       t2=t3;
//     }

//   }
//   return 0;
// }

//Prime number check

// #include <iostream>
// using namespace std;
// int main()
// {
//   int i,n,flag=0;
//   cin>>n;
//   for(i=2;i<=n-1;i++)
//   {
//     if(n%i==0)
//     {
//       flag=1;
//       break;
//     }

//     }
//     if(flag==0)
//     {
//       cout<<"prime number"<<endl;
//     }
//     else
//     {
//       cout<<"not a prime number"<<endl;
//   } 
}
// }