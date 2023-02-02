#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
    float r,v;
    const double pi=3.14; //constant
    cin >> r;
    v=r*r*r*pi*4/3;
    cout << "Thể tích hình cầu có bán kính " << setprecision(3) << fixed << r << " là " << setprecision(3) << fixed << v << endl;

    return 0;
}
