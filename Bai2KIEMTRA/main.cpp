#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double a,b,c;

    //cin >> a >> b >> c;

    a = sqrt(2);
    b = a;
    c = 2;
    if (a == b && b == c)
        cout << "The triangle is Equilateral.";
    else
        if (a != b && a != c)
        {
            if (a > b && a > c)
            {
                if (a == sqrt(pow(b, 2) + pow(c, 2)))
                    cout << "tam gia vuong tai a";
            }
            else
                if (b > c && b > a){
                    if (b == sqrt(pow(a, 2) + pow(c, 2)))
                        cout << "tam gia vuong tai b";
                }

                else
                {
                    if (c > a && c > b)
                    {
                        if (c == sqrt(pow(a, 2) + pow(b, 2)))
                            cout << "tam gia vuong tai c";
                    }
                }
        }
        else
        {
            if (a == b)
            {
                if (c == sqrt(pow(a, 2) + pow(b, 2)))
                    cout << "tam gia vuong can tai c \n";
                else
                    cout << "tam gia can tai c \n";
            }
            else
                if (a == c)
                {
                    if (b == sqrt(pow(a, 2) + pow(c, 2)))
                        cout << "tam gia vuong can tai b \n";
                    else
                        cout << "tam gia can tai b \n";
                }
                else
                {
                    if (a == sqrt(pow(b, 2) + pow(c, 2)))
                        cout << "tam gia vuong can tai a \n";
                    else
                        cout << "tam gia can tai a \n"  ;
                }
        }
    return 0;
}
