// Increasing number triangle 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int r = 0;
    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= i; ++j) {
            r += 1;
            cout << r << " ";
        }
        cout << "\n";
    }
}