#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a,b;
    cin >> a >> b;
    cout << a << " + " << b <<" = "<<a+b<<endl;
    cout << a << " - " << b <<" = "<<a-b<<endl;
    cout << a << " * " << b <<" = "<<a*b<<endl;
    cout << a << " / " << b <<" = ";
    cout << setprecision(2) << fixed << (double)a / b;
    return 0;
}
