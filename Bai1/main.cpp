#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int n,cnt;
    cin >> n;
    double s;
    if (n>0){
        s=n;
        cnt=1;
    }
    else
    {
        s=0;
        cnt=0;
    }
    while (n!=0){
        cin>>n;
        if (n>0)
        {
            s+=n;
            cnt++;
        }
    }
    cout << s;
    if (s>0)cout <<" " << fixed << setprecision(3) << s/cnt;
    else cout << " " << fixed << setprecision(3) << s;
    return 0;
}
