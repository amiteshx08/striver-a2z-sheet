// Digit frequency score

#include <bits/stdc++.h>
using namespace std;

void digitFrequencyScore(int n) {
    unordered_map<int, int> freq;
    while(n != 0) {
        int l = n % 10;
        freq[l]++;
        n /= 10;
    }
    for(auto it: freq) {
        cout << it.first << " " << it.second << "\n";
    }
}
int main() {
    int n;
    cin >> n;

    digitFrequencyScore(4);
}