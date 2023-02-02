//
// Created by Nguyễn Tuấn Anh on 20/10/2022.
//
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main(){
    float x,tuso,mauso,phanso;
    cin >> x;
    tuso=log(2*x+1);
    mauso=sqrt(1+x*x*x);
    phanso=tuso/mauso;
    cout << setprecision(3) << phanso;
    return 0;
}