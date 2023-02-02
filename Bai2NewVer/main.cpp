#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double epsilon,NeperNumber=1;
    cin >> epsilon;
    int i=1,j=0;
    while (1.0/i > epsilon){
        j++;
        i=i*j;
        double x = 1.0/i;
        NeperNumber+=x;
    }
    cout << setprecision(10) << fixed << NeperNumber;
    return 0;
}
