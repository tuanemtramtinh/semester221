#include <iostream>
#include <iomanip>
using namespace std;

int long long Giaithua (int x){
    if (x==0) return 1;
    int p=1;
    for (int i=1;i<=x;i++)
        p=p*i;
    return p;
}
int main() {
    long double epsilon,NeperNumber=0;
    cin >> epsilon;
    unsigned long long nGiaiThua;

    unsigned long long i=0,j=1;
    if (epsilon < 0.00000000000001){
        epsilon=0.00000000000001;
        nGiaiThua=1/epsilon;
        while (j <=nGiaiThua) {
            i++;
            j = j * i;
        }
        int n = i;
        for (int i = 0; i <= n; i++) {
            NeperNumber = NeperNumber + 1 / (double) Giaithua(i);
        }
    }
    else {
        nGiaiThua=1/epsilon;
        while (j <= nGiaiThua) {
            i++;
            j = j * i;
        }
        cout << i << endl;
        int n = i;
        for (int i = 0; i <= n; i++) {
            NeperNumber = NeperNumber + 1 / (double) Giaithua(i);
        }
    }
        cout << setprecision(10) << fixed << NeperNumber;

    return 0;
}
