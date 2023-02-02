#include <iostream>
using namespace std;
int main() {
    int i=0;
    while (i<10){
        cout << i << endl;
        if (i==5) continue;
        cout << i*2 << endl;
        i++;
    }
    return 0;
}