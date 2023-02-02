#include <iostream>
using namespace std;
const int modulo = 1e9+7;
const int maxValue = 1e6;
void tim (unsigned long long a[maxValue], unsigned long long n, unsigned long long* sum){
    for (int i=3;i<n;i++){
        a[i]=a[i-1]%modulo+a[i-2]%modulo;
        *sum+=a[i];
        *sum%=modulo;
    }
}
int main() {
    unsigned long long n;
    unsigned long long a[maxValue];
    cin >> n;
    a[0]=1;
    a[1]=1;
    a[2]=2;
    unsigned long long s=4;
    tim(a,n,&s);
    cout << s;
    return 0;
}
