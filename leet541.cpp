// Reverse string 2

#include <bits/stdc++.h>
using namespace std;

string reverseStr(string s, int k) {
    int n = s.size();
    // two pointers
    int l,r; 
    l = 0; r = 0;

    //basically simulate the operation
    for(int i = 0; i < n; i += 2 * k) {
        l = i;
        r = min(i + k - 1, n - 1); //i just had to do this
        for(int j = 0; j < k / 2; ++j) {
            swap(s[l], s[r]);
            l++;
            r--;
        }
    }
    return s;
}
int main() {
    string s = "abcdefghijkl";
    int k = 4;
    string r = 
    reverseStr(s, k);
    cout << r;
}