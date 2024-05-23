#include <bits/stdc++.h>
typedef long long  ll;
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int l = 0; l < t; l++) { // screen is 5x3 (5 rows 3 column)
        int x,y;
        cin >> x >> y;
        const int screen_size = 15;
        int amt_of_screen_y = y%2 == 0 ? y/2 : y/2 + 1; 
        int amount_req_of_x = screen_size * amt_of_screen_y - 4*y; // Amt of x left after deducting the y.
        if (x <= amount_req_of_x) cout << amt_of_screen_y << endl;
        else {
            int left_over_x = x - amount_req_of_x;
            int amt_of_screen_x = left_over_x % 15 == 0 ? left_over_x / 15 : left_over_x / 15 + 1;
            cout << amt_of_screen_x + amt_of_screen_y << endl;
        }
    }
        return 0;
    }
