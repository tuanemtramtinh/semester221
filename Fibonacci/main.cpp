#include <iostream>
#include <iomanip>
using namespace std;

unsigned long long fiboNor(int n){
    unsigned long long f0=0,f1=1,ffind=0;
    for (int i=2;i<=n;i++){
        ffind=f0 + f1;
        f0=f1;
        f1=ffind;
    }
    return ffind;
}

unsigned long long fiboRecursion(int n){
    if (n==0) return 0;
    if (n==1) return  1;
    n = fiboRecursion(n-1) + fiboRecursion(n-2);
    return n;
}

unsigned long long fiboArr(int n){
    unsigned long long arr[101];
    arr[0]=0;
    arr[1]=1;
    for (int i=2;i<=n;i++)
    {
        arr[i]=arr[i-1]+arr[i-2];
    }
    return arr[n];
}

int max3(int a, int b, int c){
    int max=a;
    if (max < b) max =b;
    if (max < c) max =c;
    return max;
}

int max6(int a, int b, int c, int d, int e, int f){
    if (max3(a,b,c)>max3(d,e,f))
        return max3(a,b,c);
    return max3(d,e,f);
    /*int arr[6];
    arr[0]=a;
    arr[1]=b;
    arr[2]=c;
    arr[3]=d;
    arr[4]=e;
    arr[5]=f;
    int max = arr[0];
    for (int i=0;i<6;i++){
        if (max < arr[i]) max=arr[i];
    }*/
}

int main(){
    int a,b,c,d,e,f;
    //cin >> a >> b >> c >> d >> e >> f;
    //int n;
    //cin >> n;
    //cout << fiboRecursion(n) << endl;
    //cout << fiboArr(n) << endl;
    //cout << fiboNor(n);
    /*int a=5;
    int b=5;
    bool c=-2;
    a = b + (c==1);
    cout << a;*/
    /*float x=2.5;
    int y = int(x);
    cout << y;*/
    //cout << max6(a,b,c,d,e,f);
    /*const int a = 10;
    cout << ++a;*/
    int i=5;
    int k = i / -2;
    int l = i % 2;
    cout << k << " " << l;
    return 0;
}
