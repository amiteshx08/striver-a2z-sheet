// hulk 

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string m = "that ";
    for(int i = 1; i <= n; ++i) {
        if(i % 2) {
            cout << "I hate ";
        }
        if(!(i % 2)) {
            cout << "I love ";
        }
        if(i != n) {
            cout << m;
        }
        
    }
    cout << "it";
}