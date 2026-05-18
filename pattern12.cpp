// Number crown pattern

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i) {
        //For numbers
        for(int j = 1; j <= i; ++j) {
            cout << j;
        }

        //For space
        for(int s = i + 1; s <= (2 * n) - i; ++s) {
            cout << " ";
        }

        //For numbers
        for(int k = i; k > 0; --k) {
            cout << k;
        }

        cout << "\n";
    }
}