#include <iostream>

using namespace std;
int main() {
    int days;
    cin >> days;
    int year = days/365;
    int temp1 = days%365;
    int weeks = temp1/7;
    int day = temp1%7;
    cout << days << " days = " << year << " years + " << weeks << " weeks + " << day << " days.";
    return 0;
}
