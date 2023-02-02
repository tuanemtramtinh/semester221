//
//  Bai3.cpp
//  Week4
//
//  Created by Nguyễn Tuấn Anh on 31/10/2022.
//

#include <stdio.h>
#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
int main(){
    float a,b,c,delta,x1,x2;
    cin >> a >> b >> c;
    delta = b*b - 4*(a*c);
    if (delta==0){
        cout <<"Roots are the same." << endl;
        x1=x2=-b/(2*a);
        cout << setprecision(2)<<fixed<<x1;
    }
    else if (delta >0){
        x1 = (-b - sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);
        cout<<"X1= " <<setprecision(2)<< fixed << x2 <<endl;
        cout<<"X2= " <<setprecision(2)<< fixed << x1 <<endl;
    }
    else{
        cout<<"No roots.";
    }
}
