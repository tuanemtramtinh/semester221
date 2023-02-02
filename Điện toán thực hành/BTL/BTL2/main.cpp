#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

struct MoveCommand{
    char direction;
    int num;
};

int ChartoInt (char x){
    int z;
    z = x - '0';
    return z;
}

void _earlyprocess(string s, MoveCommand arr[]){
    int n = s.size();
    int cnt = 0;
    for (int i = 0;i < n;i++){
        static int j = 0;
        arr[j].direction = s[i];
        cnt = 0;
        if (int(s[i+1]) >= 48 && int(s[i+1]) <= 57) {
            int z = i + 1, sum = 0;
            while (int(s[z]) >= 48 && int(s[z]) <= 57) {
                sum = sum * 10 + ChartoInt(s[z]);
                z++;
                cnt++;
            }
            arr[j].num = sum;
        }
        i += cnt;
        j++;
    }

}

int _midprocess (string s, MoveCommand arr[]){
    pair<int, int> coordinates = {0, 0};
    int n = s.size();
    for (int i = 0; i < n/2; i++){
        switch (arr[i].direction) {
            case 'U': coordinates.second += arr[i].num;break;
            case 'D': coordinates.second -= arr[i].num;break;
            case 'L': coordinates.first -= arr[i].num;break;
            case 'R': coordinates.first += arr[i].num;break;
        }
    }
    float distances,x,y;
    x = pow(coordinates.first,2);
    y = pow(coordinates.second, 2);
    distances = round(sqrt(x+y));
    return distances;
}

bool isPrime (int x){
    if (x == 1 || x == 0 ) return false;
    for (int i = 2; i <= sqrt(x); i++){
        if (x % i == 0) return  false;
    }
    return true;
}

bool isSquareNumber (int x){
    if (x < 1) return false;
    int temp = sqrt(x);
    if (temp*temp == x) return true;
    else return false;
}

int main() {
    string moves;
    cin >> moves;
    MoveCommand arr[1000];
    _earlyprocess(moves, arr);
    int res = _midprocess(moves, arr);
    cout << "Khoang cach xe da di chuyen tu vi tri ban dau toi diem hien tai: " << res <<" "<< endl;
    if (isPrime(res)) cout << "So " << res << " la so nguyen to" << endl;
    if (isSquareNumber(res)) cout << "So " << res << " la so chinh phuong" << endl;
    return 0;
}
