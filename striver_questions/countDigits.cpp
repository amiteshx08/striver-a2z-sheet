// Count all digits of a number

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 0;
    if(n == 0) return 1;
    while(n > 0) {
        count++;
        n /= 10;  
    }
    cout << count;
}