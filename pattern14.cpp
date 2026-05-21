// Increasing letter triangle 

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 0; i < n; ++i) {
       for(int j = 0; j <= i; ++j) {
        char pattern = 'A' + j;
        cout << pattern;
       }
       cout << "\n";
    }
}