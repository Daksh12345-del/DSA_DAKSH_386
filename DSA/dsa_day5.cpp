// #include <iostream>
// using namespace std;

// function definition
// int sum(int a, int b) // Correctly declares parameters 'a' and 'b'
// {
//     int s = a + b;
//     return s;
// }
// int main()
// {
//     cout << sum(10, 5) << endl;
//     return 0;
// }

// min of 2 numbers
//

// sum of n numbers
// int sumN(int n)
// {
//     int sum = 0, i;
//     for (i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     return sum;
// }
// int main()
// {
//     cout << sumN(5) << endl;
//     return 0;
// }

// factorial of a number
// int fact(int n)
// {
//     int factorial = 1, i;
//     for (i = 1; i <= n; i++)
//     {
//         factorial = factorial * i;
//     }
//     return factorial;
// }
// int main()
// {
//     int n = 5; // Default value, no input needed
//     cout << "Factorial of " << n << " is: " << fact(n) << endl;
//     return 0;
// }

// function memory
// 1.stack-static memory allocation
// 2.heap-dynamic memory allocation
// return is the end of the function

// pass by value function
// int sum(int a, int b)
// {
//     a = a + 10;
//     b = b + 10;
//     return a + b;
// }
// int main()
// {
//     int a = 5;
//     int b = 4;
//     cout << sum(a, b) << endl;
//     return 0;
// }

// Sum of digits problem
// #include <iostream>
// using namespace std;
// int sumofdigit(int n)
// {
//     int sum = 0;
//     while (n != 0)
//     {
//         int rem = n % 10;
//         n = n / 10;
//         sum = sum + rem;
//     }
//     return sum;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << sumofdigit(n) << endl;
//     return 0;
// }

// nCr problem statement
#include <iostream>
using namespace std;
int ncr(int n, int r)
{
    int factn = 1, factr = 1, factnr = 1, i, a, b;
    for (i = 1; i <= n; i++)
    {
        factn = factn * i;
    }
    for (i = 1; i <= r; i++)
    {
        factr = factr * i;
    }
    b = n - r;
    for (i = 1; i <= b; i++)
    {
        factnr = factnr * i;
    }
    a = factn / (factr * factnr);
    return a;
}
int main()
{
    int n, r;
    cin >> n >> r;
    cout << ncr(8, 6) << endl;
    return 0;
}