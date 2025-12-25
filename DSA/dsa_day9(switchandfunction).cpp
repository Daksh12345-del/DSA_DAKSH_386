// #include <iostream>
// using namespace std;
// int main()
// {
//     // int num=2;
//     //in switch case it doesn't take value of float/string/boolean
//     char ch='a';
//     int num=1
//     switch(ch)
//     {
//         case 'a':
//         cout<<"case 1 executed"<<endl;
//         switch (num):
//         {
//             case 1:
//             cout<<"nested case 1 executed"<<endl;
//             break;
//         }
//         break;
//         case 'b':
//         cout<<"case 2 executed"<<endl;
//         break;
//         case 'c':
//         cout<<"case 3 executed"<<endl;
//         break;
//         default:
//         cout<<"default case executed"<<endl;
//     }
//     return 0;
// }

//Homework:
// #include<iostream>
// using namespace std;
// int main()
// {
//     int i=1;
//     while(i==1)
//     {
//         switch(i)
//         {
//             case 1:
//             cout<<"case 1 executed"<<endl;
//             exit(1);
//             break;
//             exit(1);
//             case 2:
//             cout<<"case 2 executed"<<endl;
//             break;
//             default:
//             cout<<"default case executed"<<endl;
//         }
//     }
//     return 0;
// }

//homework 2:
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=1330;
//     while(n!=0)
//     {
//         int hundred=n/100;
//         int twenty=(n%100)/20;
//         int one=((n%100)%20)/1;
//         break;}
//         switch(hundred)
//         {
//             case 1:
//             cout<<"one"<<endl;
//             break;
//             case 2:
//             cout<<"two"<<endl;
//             break;
//             case 3:
//             cout<<"three"<<endl;
//             break;
//             case 4:
//             cout<<"four"<<endl;
//             break;
//             case 5:
//             cout<<"five"<<endl;
//             break;
//             case 6:
//             cout<<"six"<<endl;
//             break;
//             default:
//             cout<<hundred<<endl;
//             break;

//         }
//         switch(twenty)
//         {
//             case 1:
//             cout<<"twenty"<<endl;
//             break;
//             case 2:
//             cout<<"forty"<<endl;
//             break;
//             case 3:
//             cout<<"sixty"<<endl;
//             break;
//             case 4:
//             cout<<"eighty"<<endl;
//             break;
//             default:
//             cout<<twenty<<endl;
//             break;

//         }
//         switch(one)
//         {
//             case 1:
//             cout<<"one"<<endl;
//             break;
//             case 2:
//             cout<<"two"<<endl;
//             break;
//             default:
//             cout<<one<<endl;
//             break;
//     }
//  return 0;
// }

//functions
//power function

// #include<iostream>
// #include<math.h>
// using namespace std;
// int power(int a,int b)
// {
//     int result=1;
//     for(int i=1;i<=b;i++)
//     {
//         result=result*a;
//     }
//     cout<<result<<endl;
//     return 0;
// }
// using namespace std;
// int main()
// {
//     power(2,3);
// }

//even odd function
// #include<iostream>
// using namespace std;
// int evenodd(int n)
// {
//     if(n%2==0)
//     {
//         cout<<"even"<<endl;
//     }
//     else
//     {
//         cout<<"odd"<<endl;
//     }
// }
// int main()
// {
//     evenodd(3);
//     int answer=evenodd(3);
//     cout<<answer<<endl;
//     return 0;
// }

//ncr function
// #include <iostream>
// using namespace std;
// int ncr(int n, int r)
// {
//     int factn = 1, factr = 1, factnr = 1, i, a, b;
//     for (i = 1; i <= n; i++)
//     {
//         factn = factn * i;
//     }
//     for (i = 1; i <= r; i++)
//     {
//         factr = factr * i;
//     }
//     b = n - r;
//     for (i = 1; i <= b; i++)
//     {
//         factnr = factnr * i;
//     }
//     a = factn / (factr * factnr);
//     return a;
// }
// int main()
// {
//     int n, r;
//     cin >> n >> r;
//     cout << ncr(8, 6) << endl;
//     return 0;
// }

//counting function
// #include <iostream>
// using namespace std;
// void countdigit(int n)
// {
//     for(int i=1;i<=n;i++)
//     {
//         cout<<i<<" "<<endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
// function call
//     cout << countdigit(n) << endl;
//     return 0;
// }

//prime check function
// #include <iostream>
// using namespace std;
// bool primecheck(int n)
// {
//     int i,flag=0;
//     for(i=2;i<n;i++)
//     {
//         if(n%i==0)
//         {
//             flag=1;
//             break;
//         }
//     }
//     if(flag==0)
//     {
//         return true;
//     }
//     else
//     {
//         return false;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     bool isprime=primecheck(n);
//     if(isprime)
//     {
//         cout<<"prime number"<<endl;
//     }
//     else
//     {
//         cout<<"not a prime number"<<endl;
//     }
//     return 0;
// }

//homework:
// #include <iostream>
// using namespace std;
// int ap(int n)
// {
//     int ans=3*n+7;
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << ap(n) << endl;
//     return 0;
// }

// fibonacci function
// #include <iostream>
// using namespace std;
// int fibo(int n)
// {
//     int t1=0;t2=1;t3
//     if(n==1||n==2)
//     return 1;
//     else
//     {
//         for(int 1=1;i<=n-2;i++)

// {
//     t3=t1+t2;
//     t1=t2;
//     t2=t3;
// }        
//     return t3;
// }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << fibo(n) << endl;
//     return 0;
// }
