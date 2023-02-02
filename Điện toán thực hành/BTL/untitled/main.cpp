#include <iostream>
using namespace std;
const int maxArr = 1e5;
int main()
{
    int n;
    cin >> n;
    int a[n], c[maxArr+1], b[maxArr+1];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = 0;
    }
    for (int i = 0; i < n; i++)
        b[a[i]] = b[a[i]] + 1;
    int cnt = 0;
    for (int i = 0; i <= 1e5; i++){
        static int j = 0;
        if (b[i] == 1){
            c[j] = i;
            cnt++;
            j++;
        }
    }
    int minValue = INT_MAX;
    for (int i=0; i < cnt; i++)
        if (minValue > c[i]) minValue = c[i];
    cout << minValue;
    return 0;
}