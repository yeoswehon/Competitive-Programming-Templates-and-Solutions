#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x = 0;
    for (int i=0;i<5;i++){
        for (int j=0;j<5;j++){
            cin >> x;
            if (x==1) {
                cout << abs(j-2) + abs(i-2)<< endl;
            }
        }
    }
    return 0;
}
