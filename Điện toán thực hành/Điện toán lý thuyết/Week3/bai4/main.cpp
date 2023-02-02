#include <iostream>
using namespace std;
int main() {
    string str1,str2,str4,str1temp;
    getline(cin,str1);
    str1temp=str1;
    int s;
    s=str1.length();
    cout << "Chiều dài của chuỗi nhập là: " <<s<<endl;
    str2=str1[1];
    cout << "Ký tự ở vị trí 1 là: " <<str2<<endl;
    string str3(str1, 3, 4);
    cout << "Chuỗi con 4 ký tự từ vị trí 3 là: " <<str3 <<endl;
    str4= str1.replace(3,4,"----");
    cout << "Thay thế chuỗi con trên bởi chuỗi \"----\": " <<str4 <<endl;
    string str5="xxxx";
    string str6;
    str6 = str1.insert(5,str5);
    cout << "Chèn chuỗi \"xxxx\" vào vị trí 5: " <<str6;

    return 0;
}
