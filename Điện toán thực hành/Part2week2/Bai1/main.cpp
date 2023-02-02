#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int convertBinaryToDecimal(string n)
{
    char bin[n.length()];
    int arr[n.length()];
    for (int i=0;i<n.length();i++){
        bin[i]=n[n.length()-1-i];
    }
    int s=0;
    for (int i=0;i<n.length();i++){
        arr[i]=bin[i] - '0';
        s=s + arr[i]*pow(2 ,i) ;
    }
    return s;
}
int main(){
    string n;
    cin >> n;
    cout << n << " in binary = " << convertBinaryToDecimal(n) << " in decimal";
    return 0;
}
