// Reverse string prefix

#include <bits/stdc++.h>
using namespace std;
string revPrefix(string s, int k) {
    int l = 0;
    int r = k - 1;
    while(l <= r) {
        char temp = s[l];
        s[l] = s[r];
        s[r] = temp;
        r--;
        l++;
    }
    return s;
}
int main() {
    string s = "aabcde";
    int k = 3;
    cout << revPrefix(s, k);
}