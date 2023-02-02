#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    cin >> n;
    string s;
    s=(n%2==0)? "Even":"Odd";
    cout << s;
    return 0;
}
