#include <iostream>
#include <vector>
using namespace std;

/*vector<int> res;
int s = 0, n, target;
bool check[100] = {0};

void print(){
    for (int i = 0; i < (int) res.size(); i++){
        cout << res[i] << " ";
    }
    cout << endl;
}

void Try(int a[], int pos){
    if (s == target) print();
    else if ((int)res.size() == n) return;
    else {
        for (int i = 0; i < n; i++){
            if (check[i] == false){
                res.push_back(a[i]);
                check[i] = true;
                s += res[pos];
                Try(a, pos + 1);
                res.pop_back();
                check[i] = false;
                s -= res[pos];
            }
        }
    }
}

int main() {
    int a[100];
    cin >> n >> target;
    for (int i = 0; i < n; i++) cin >> a[i];
    Try(a, 0);
    return 0;
}*/

int binarysearch(int arr[], int n, int k) {
    int left = 0, right = n - 1, middle = 0;
    while(left <= right){
        middle = (left + right)/2;
        if (arr[middle] == k){
            if (middle == 0) return -1;
            else return middle;
        }
        else if(arr[middle] > k) right = middle - 1;
        else if(arr[middle] < k) left = middle + 1;
    }
    return -1;
}

int main(){
    int a[100], n, k;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> k;
    cout << binarysearch(a, n, k);
    return 0;
}