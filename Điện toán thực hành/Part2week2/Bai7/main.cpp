#include <iostream>
#include <math.h>
using namespace std;
int reverseNum(int n)
{
    int temp=0,s=0;
    while (n%10!=0)
    {
        temp=n%10;
        s=10*s+temp;
        n=n/10;
    }
    return s;
}
int main() {
    int n;
    cin >> n;
    cout << reverseNum(n);
    return 0;
}
