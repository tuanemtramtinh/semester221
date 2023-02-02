#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
    int a,b,s;
    cin >> a >> b;
    a=a%1000;
    b=b%1000;
    cout << setw(3) << a << endl;
    cout << setw(3) << b << endl;
    s=a+b;
    cout << "---" << endl << setw(3) << s%1000;
    return 0;
}
