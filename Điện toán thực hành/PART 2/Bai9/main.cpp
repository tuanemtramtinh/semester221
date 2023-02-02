#include<iostream>
using namespace std;
int main()
{
    int A,B;
    cin >> A >> B;
    int temp;
    temp=A;
    A=B;
    B=temp;
    cout<<A<<" "<<B;
    return 0;
}