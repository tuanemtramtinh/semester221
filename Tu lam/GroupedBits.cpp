#include <iostream>
#include <map>
#include <string>
using namespace std;
 
int groupedBits (int n){
    if (n == 0) return 0;
    else{
        int res;
        string s;
        s = "";
        while (n / 2 != 0){
            res = n % 2;
            s = s + to_string(res);
            n = n / 2;
        }
        if (n != 0)
            s = s + "1";
        string str = "";
        for (int i = s.size() - 1; i >=0; i--)
            str += s[i];
        map <char, int> mp;
        mp['1'] = 0;
        int cnt = 0;
        int temp = 0;
        if (str.size() == 1 && str[0] == '0') cnt = 0;
        else{
            for (int i = 0; i < str.size(); i++)
                if (str[i] == '1') mp['1']++;
            if (mp['1'] == str.size()){
                cnt = 1;
            }
            else{
                if (str[str.size() - 1] == '1') cnt++;
                for (int i = 0; i < str.size(); i++)
                {
                    if (str[i] == '1') {
                        mp['1']++;
                        temp = mp['1'];
                    }
                    if (str[i] == '0') mp['1'] = 0;
                    if ((temp - mp['1']) != 0){
                        cnt++;
                        temp = 0;
                    }
                }
            }
        }
        return cnt;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << groupedBits(n);
 
    return 0;
}