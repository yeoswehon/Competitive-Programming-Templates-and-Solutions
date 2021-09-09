#include <iostream>

using namespace std;

int main() {
    long long int;
    cin >> n;
    int k;
    cin >> k;
    for (int = 0; i < k; ++i) {
        if (n%10 == 0)
        n /= 10;
        else
            n -=1;
    }
    cout <<n << endl;
    return 0;
}