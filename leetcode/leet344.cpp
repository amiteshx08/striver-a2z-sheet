// Reverse string
#include <bits/stdc++.h>
using namespace std;

void reverseString(vector<char> &s) {
    int l = 0;
    int r = s.size() - 1;
    while(l <= r) {
        swap(s[l], s[r]);
        l++;
        r--;
    }
    for(int i = 0; i < s.size(); ++i) {
        cout << s[i] << " ";
    }
}
int main() {
    vector<char> s = {'h', 'e', 'l', 'l', 'o'};
    reverseString(s);
} 
