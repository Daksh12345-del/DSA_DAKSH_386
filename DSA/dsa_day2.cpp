#include <iostream>
using namespace std;
int main()
{
    int age=25; /*int take 4 bytes*/
    float pi=3.14; /*float take 4 bytes*/
    double d=3.141592653589793; /*double take 8 bytes*/
    char c='A'; /*char take 1 byte*/
    bool isAdult=true; /*bool take 1 byte*/
    int newprice=(int)d; /*type casting*/
    cout<<newprice<<endl;
    return 0;
}
// This is known as boilerplate code
