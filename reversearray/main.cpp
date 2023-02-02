#include <iostream>
#include <vector>
using namespace std;
vector<long long> arr;

void ReverseArray(long n, long long k){
    long long x = n / k, y = n % k, pos = 0;
    long long tam = k;
    vector<long long> temp;
    temp = arr;
    if (k > n){
        int check = n;
        for(long long i = 0; i < n; i++){
            arr[i] = temp[check - 1];
            check--;
        }
    }else {
        for (long long i = 0; i < x; i++) {
            for (long long j = pos; j < k; j++) {
                arr[tam - 1] = temp[pos];
                pos++;
                tam--;
            }
            k += pos;
            tam = k;
        }
        k = k - (pos - y);
        if ((n - y) == (k - y)) {
            long long check = n;
            for (long long i = k - y; i < n; i++) {
                arr[i] = temp[check - 1];
                check--;
            }
        }
    }
    for (long long i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

}

int main() {
    int n, k;
    cin >> n >> k;
    for (long long i = 0; i < n; i++){
        long long x;
        cin >> x;
        arr.push_back(x);
    }
    ReverseArray(n, k);
    return 0;
}
