#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
const double pi=3.14;
int main() {
    double x[17];
    int temp=5;
    for (int i=0;i<17;i++)
    {
        x[i]=(temp*pi)/180;
        temp+=5;
    }
    for (int i=0;i<17;i++)
    {
        cout<< setprecision(2) << fixed << setw(5) << left << sin(x[i]) <<setw(5) << left << cos(x[i]) << setw(5) << left << tan(x[i])<<endl;
    }

    return 0;
}
