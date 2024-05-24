#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i=0;i<t;i++){
        int x,y,z;
        cin >> x >> y >> z; // x = number of yoghurt he wants to buy, price of one yoghurt, price of 2 on promotion
        if (y*2 < z) z = 2 * y;
        if (x == 1) {
            cout << y << endl;
        }
        else if (x == 2) {
            cout << z << endl;
        }
        else if (x % 2 == 0) {
            cout << z*(x/2) << endl;
        }
        else {
            cout << z*(x/2) + y << endl;
        }
    }
    return 0;
}
