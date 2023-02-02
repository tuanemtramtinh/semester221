#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int a,b,c;
    cin >> a >> b >> c;
    if (a==b && b==c) cout << "The triangle is Equilateral.";
    else {
        if (a==b || a==c || b==c) {
            if (a==sqrt(pow(b,2)+pow(c,2)) || b== sqrt(pow(a,2)+pow(c,2)) || c==sqrt(pow(a,2)+pow(b,2))){
                cout << "The triangle is Right-angled.";
            }
            else cout << "The triangle is Isosceles.";
        }
        else if (a==sqrt(pow(b,2)+pow(c,2)) || b== sqrt(pow(a,2)+pow(c,2)) || c==sqrt(pow(a,2)+pow(b,2))){
            cout << "The triangle is Right-angled.";
        } else cout << "The triangle is Scalene.";
    }

    return 0;
}
