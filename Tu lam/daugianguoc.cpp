#include <iostream>
using namespace std;
 
int main()
{
    int n, a[n], b[n];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int j= i + 1;
        static int z = 0;
        if (j == n-1) break;
        else{
            if (a[i] != a[j])
            {
                b[z] = a[i];
                cnt++;
            }
        }
    }
    for (int i = 0; i < cnt; i++)
        cout << b[i] << " ";
    return 0;
}