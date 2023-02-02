#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int n,check;
    check =1;
    cin >> n;

    if (n==1) cout << n << " is the prime";
    else {
        if (n == 0) cout << "Wrong input";
        else {
            for (int i = 2; i <= sqrt(n); i++) {
                if (n % i == 0) check = 0;
                else check = 1;
            }
            if (check == 0) cout << n << " is not the prime";
            else cout << n << " is the prime";
        }
    }
    return 0;
}
