#include <iomanip>
#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> nums;
    int target,number;
    cin >> target;
    while (cin >> number) {
        nums.push_back(number);
    }
    int n=nums.size();
    for (int i=0;i<n;i++){
        for (int j=i+1;j<n;j++){
            if (nums.at(i)+nums.at(j)==target){
                cout << i << " " <<j;
            }
        }
    }
    return 0;
}