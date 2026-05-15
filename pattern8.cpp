// Inverted star pyramid

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // outer loop(rows) -> inner loop(space) -> inner loop(stars)
    for(int i = n; i >= 1; --i){
        // a seperate loop for space
        for(int s = 0; s < n - i; ++s) {
            cout << " ";
        }
        
        // a seperate loop for stars
        for(int j = 0; j < 2 * i - 1 ; ++j){
            cout << "*";
        }
        cout << "\n";
    }
}