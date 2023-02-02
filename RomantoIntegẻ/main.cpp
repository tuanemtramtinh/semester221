#include <iostream>
#include <string>
#include <struct.h>
using namespace std;
struct RomanInt{
    char RomanNum;
    int IntNum;
};

int _Process(RomanInt a[] ,string s){
    int size=s.length();
    int sum=0;
    for (static int i=0;i<size;i++){
        if (s[i]=='I' && s[i+1]=='V'){
            sum+= (a[1].IntNum - a[0].IntNum);
            i+=1;
            continue;
        }
        else if (s[i]=='I' && s[i+1]=='X'){
            sum+= (a[2].IntNum - a[0].IntNum);
            i+=1;
            continue;
        }
        else if (s[i]=='X' && s[i+1]=='L') {
            sum+= (a[3].IntNum - a[2].IntNum);
            i+=1;
            continue;
        }
        else if (s[i]=='X' && s[i+1]=='C') {
            sum+= (a[4].IntNum - a[2].IntNum);
            i+=1;
            continue;
        }
        else if (s[i]=='C' && s[i+1]=='D') {
            sum+= (a[5].IntNum - a[4].IntNum);
            i+=2;
            continue;
        }
        else if (s[i]=='C' && s[i+1]=='M') {
            sum+=(a[6].IntNum - a[4].IntNum);
            i+=1;
            continue;
        }
        else {
            for (int j=0;j<7;j++){
                if (s[i]==a[j].RomanNum) sum+= a[j].IntNum;
            }
        }
    }
    return sum;
}

int main() {
    struct RomanInt Arr[7];
    Arr[0].RomanNum = 'I';Arr[0].IntNum=1;
    Arr[1].RomanNum = 'V';Arr[1].IntNum=5;
    Arr[2].RomanNum = 'X';Arr[2].IntNum=10;
    Arr[3].RomanNum = 'L';Arr[3].IntNum=50;
    Arr[4].RomanNum = 'C';Arr[4].IntNum=100;
    Arr[5].RomanNum = 'D';Arr[5].IntNum=500;
    Arr[6].RomanNum = 'M';Arr[6].IntNum=1000;
    string Roman;
    cin>> Roman;
    cout << _Process(Arr,Roman);
    return 0;
}
