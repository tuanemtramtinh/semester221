#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double WorkingHour[5],Wage[5];
    for (int i=0;i<5;i++) cin >> WorkingHour[i];
    double HourlyRate[5] = {9.5,6.4,12.5,5.5, 10.5 };
    for (int i=0;i<5;i++) Wage[i]=WorkingHour[i]*HourlyRate[i];
    cout << "Hourly Rate                   Working Hour                  Wage"<<endl;
    for (int i=0;i<5;i++) {
        cout << setprecision(10) << fixed << setw(30) << left << HourlyRate[i] << setw(30) << left << WorkingHour[i] << setw(30) << left << setw(30) << Wage[i] <<endl;
    }
    return 0;
}
