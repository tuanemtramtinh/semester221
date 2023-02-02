#include <iostream>

using namespace std;
const int MAX = 100000;

int doUnion(int n, int m, int a[], int b[]){
    int c[MAX], cnt = 0;
    for (int i = 0; i < MAX; i++) c[i] = 0;
    for (int i = 0; i < m; i++) c[b[i]]++;
    for (int i = 0; i < n; i++) c[a[i]]++;
    for (int i = 0; i < MAX; i++){
        if (c[i] != 0) cnt++;
    }
    return cnt;
}

int main() {
    int n, m;
    int a[MAX], b[MAX];
    cin >> n >> m;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < m; i++) cin >> b[i];
    cout << doUnion(n, m, a, b);
    return 0;
}
