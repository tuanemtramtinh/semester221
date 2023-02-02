#include <iostream>
using namespace std;

void fiboArr(int n){
    unsigned long long arr[101];
    arr[0]=0;
    arr[1]=1;
    for (int i=2;i<=n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    for (int i=0;i<n;i++) cout << arr[i] << " ";
}

int main() {
    unsigned long long n;
    cin >> n;
    fiboArr(n);
    return 0;
}
