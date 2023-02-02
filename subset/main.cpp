#include <iostream>
#include <vector>

using namespace std;

vector<int> subset;

void print_vector(){
    for (int i = 0; i < (int)subset.size(); i++)
    {
        cout << subset[i] << " ";
    }
    cout << endl;
}

void findsubset(int k, int n)
{
    if (k > n) {
        print_vector();
        return;
    }
    subset.push_back(k);
    findsubset(k + 1, n);
    subset.pop_back();
    findsubset(k + 1, n);
}


int main() {
    int n, k;
    cin >> k >> n;
    findsubset(k, n);
    return 0;
}
