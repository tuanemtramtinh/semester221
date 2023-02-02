#include <iostream>
#include <stack>
using namespace std;
int main(int argc, const char * argv[]) {
    stack <char> str;
    string s,a;
    getline(cin,s);
    int n = s.length();
    bool check =true;
    if (n%2==0){ //Nếu chuỗi có độ dài bằng 3 thì sẽ ra giá trị false bởi vì khi đó có ít nhất một chuỗi không có dấu đóng vd : (})
            for (int i=0;i<n;i++) {
                if (s[i] == '(' || s[i] == '[' || s[i] == '{') str.push(s[i]);
                else{
                    if (!str.empty())
                    {
                        /*if (str.top() =='(' && s[i]==')'){
                            str.pop();
                        }else {
                            if (str.top() == '[' && s[i] == ']') str.pop();
                            else {
                                if (str.top() == '{' && s[i] == '}') str.pop();
                                else check=false;
                            }
                        }*/
                        if ((str.top()=='(' && s[i]==')') || (str.top()=='[' && s[i]==']' || str.top()=='{' && s[i]=='}' ) str.pop();
                        else check=false;
                    } else check=false;
                }
            }
            if (check==false) cout << false;
            else cout << str.empty();
    } else cout << false;
    cout << endl;
    return 0;
}
