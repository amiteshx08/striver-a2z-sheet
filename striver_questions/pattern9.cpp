// Diamond star pattern

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    //upper part
    for(int i = 1; i <= n; ++i) {
        // space
        for(int s = 0; s < n - i; ++s) {
            cout << " ";
        }

        // stars
        for(int k = 0; k < 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << "\n";
    }

    //lower part
    for(int i = n; i >= 1; --i) {
        // space
        for(int s = 0; s < n - i; ++s) {
            cout << " ";
        }
        
        // stars
        for(int k = 0; k < 2 * i - 1; ++k) {
            cout << "*";
        }
        cout << "\n";
    }
}