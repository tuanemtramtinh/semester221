#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n;
    cin >> n;
    double s=0;
    for (int i=1;i<=n;i++)
    {
        double a;
        cin >> a;
        s=s+a;
    }
    cout << setprecision(2) << fixed << s/n;
    return 0;
}
