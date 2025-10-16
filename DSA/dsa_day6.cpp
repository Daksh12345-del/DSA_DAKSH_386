/*Decimal to binary conversion*/
// #include <iostream>
// using namespace std;
// int dectobin(int n)
// {
//     int ans = 0;
//     int pow = 1;
//     while (n > 0)
//     {
//         int rem = n % 2;
//         n = n / 2;
//         ans += rem * pow;
//         pow = pow * 10;
//     }
//     return ans;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     cout << dectobin(n) << endl;
//     return 0;
// }

/*Binary to Decimal Conversion*/
#include <iostream>
using namespace std;
int bintodec(int n)
{
    int ans = 0;
    int pow = 1;
    while (n > 0)
    {
        int rem = n % 10;
        n = n / 10;
        ans += rem * pow;
        pow = pow * 2;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << bintodec(n) << endl;
    return 0;
}