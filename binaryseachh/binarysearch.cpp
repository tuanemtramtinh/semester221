#include <iostream>

using namespace std;

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
 }

int main(){
    int a[100], n, k; 
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    cin >> k;
    cout << binarysearch(a, n, k);
    return 0;
}