#include <iostream>
#include <math.h>
using namespace std;

bool isPrimeNumber(int n){
    bool check=true;
    if (n==1 || n==0) return false;
    for (int i=2;i<=sqrt(n);i++)
    {
        if (n%i==0) return false;

    }
    return true;
}

int main() {
    int n;
    cin >> n;
    if (isPrimeNumber(n)) cout << n <<" is a prime number";
    else cout << n << " is not a prime number";
    return 0;
}
