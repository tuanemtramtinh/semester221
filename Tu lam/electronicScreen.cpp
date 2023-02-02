#include<iostream>
#include<map>
using namespace std;

string electronicScreen(string s){
    map <string, string> mp;
    mp["01011111"] = '0';
    mp["00000101"] = '1';
    mp["01110110"] = '2';
    mp["01110101"] = '3';
    mp["00101101"] = '4';
    mp["01111001"] = '5';
    mp["01111011"] = '6';
    mp["01000101"] = '7';
    mp["01111111"] = '8';
    mp["01111101"] = '9';
    int n = s.size() / 8;
    string res;
    for (int i = 0; i < n; i++)
    {
        static int j = 0;
        string temp(s, j, j + 7);
        res += temp;
        j += 8;
    }
}

int main()
{
    string s;
    cin >> s;
    cout << electronicScreen(s);
    return 0;
}