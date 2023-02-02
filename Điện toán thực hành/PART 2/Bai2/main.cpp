#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a=0, b;
    // code that makes the program works
    for (int i=0;i<5;i++)
    {
        cin >> b;
        a+=b;
    }
    cout<<fixed<<setprecision(2)<<"The average of 5 integers: "<<a/5.0;
    return 0;
}