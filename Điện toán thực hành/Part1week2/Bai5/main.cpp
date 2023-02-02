#include <iostream>
using namespace std;

int main() {
    int n,cnt1=0,cnt2=0;
    cin >> n;
    double a;
    for (int i=0;i<n;i++)
    {
        cin >> a;
        if (a>=0) cnt1++;
        else cnt2++;
    }
    cout << cnt1 << " " << cnt2;
    return 0;
}
