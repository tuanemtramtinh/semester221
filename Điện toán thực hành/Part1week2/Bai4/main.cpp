#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;double x;
    cin >> n >> x;
    double x1,x2;
    x1=1;x2=1;
    while (n!=0){
        x1=x1*x;
        x2=1/(x1);
        n--;
    }
    cout << setprecision(2) << fixed << x1 <<" "<< x2;
    return 0;
}
