#include <iostream>
#include <math.h>
using namespace std;
int checkPrime (int n){
    int check=1;
    if (n==0||n==1) return 0;
    for (int i=2;i<=sqrt(n);i++)
        if (n%i==0) check=0;
    return check;
}
void printPrimes(int lower, int upper)
{
    for (int i=lower;i<=upper;i++){
        if (checkPrime(i)==1) cout << i << " ";
    }
}
int main()
{
    int lower, upper;
    cin>>lower;
    cin>>upper;
    // Calling function to print all primes between the given range.
    printPrimes(lower, upper);
    return 0;
}
