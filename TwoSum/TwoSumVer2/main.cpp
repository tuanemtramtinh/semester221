#include <iostream>
#include <math.h>
#include <vector>
#include <map>


using namespace std;

int main() {
    pair <int,int> p;
    map <int,int> m;
    int target,numfind;
    vector <int> nums ;
    cin >> target;
    int x;
    while (cin >> x)
        nums.push_back(x);
    if (nums.size() <= 1)
        cout << "khong co gia tri thoa man";
    for (int i; i < nums.size(); ++i)
    {
        numfind = target - nums[i];//tìm giá trị key
        if (m.find(numfind)!=m.end())// nếu tìm thấy giá trị key thoả mản trong map thì in vị trí của chúng trong nums ra màn hình
        {                              // giá trị key trong map tương ứng với giá trị value trong nums
                                       // giá trị value trong map tương ứng với giá trị index trong nums
            cout << m[numfind] << i;
        }
        else m[nums[i]]=i;// nếu không tìm thấy giá trị thoả mản thì thêm key và value đó vào map
    }
    return 0;
}
