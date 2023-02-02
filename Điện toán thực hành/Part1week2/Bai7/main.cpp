#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >>n;
    double a[1000];
    for (int i=0;i<n;i++) cin >> a[i];
    float max=a[0];
    for (int i=0;i<n;i++){
        if (max<a[i]) max=a[i];
    }
    cout << setprecision(2) << fixed <<  max;
    return 0;
}
