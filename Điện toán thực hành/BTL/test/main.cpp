#include <cmath>
#include <iostream>
#include <string>
using namespace std;
int show(string moves){
    float distance;
    int dai=0;
    int rong=0;
    for (int i=0;i<moves.size();i+=2){
        if(moves[i]=='U'||moves[i]=='u'){
            dai= dai+moves[i+1]-48;
        }else if(moves[i]=='D'||moves[i]=='d'){

            dai=dai-moves[i+1]+48;
        }else if(moves[i]=='L'||moves[i]=='l'){
            rong=rong-moves[i+1]+48;

        }else if(moves[i]=='R'||moves[i]=='r'){
            rong=rong+moves[i+1]-48;
        }
    }distance= sqrt(pow(dai,2)+pow(rong,2));
   distance = round(distance);
    return distance;
}
bool isprime(int n) {
    if (n==1 || n ==0) return false;
    for (int i=2; i<=sqrt(n); i++)
        if (n%i==0) return false;
    return true;
}

bool isSquared(int n)
{
    int nghiem=sqrt(n);
    if(pow(nghiem,2)==n){
        return true;
    }
    return false;
}
int main()
{
    string s;
    cin>>s;
    int distance =0;
    distance =show(s);
    cout << "Khoang cach xe da di chuyen tu vi tri ban dau toi diem hien tai: "<< distance<<endl;
    if (isprime(distance)){
        printf("So %d la so nguyen to\n", distance);
    }else if(isSquared(distance)){
        printf("So %d la so chinh phuong\n", distance);
    }
}
