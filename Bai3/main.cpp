#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    double pi=0,temp;
    for (int i=0;i<=n;i++)
    {
        temp=pow(-1,i)*(4/(double)(2*i+1));
        pi=pi+temp;
    }
    cout << fixed << setprecision(15)<<pi;
    return 0;
}
