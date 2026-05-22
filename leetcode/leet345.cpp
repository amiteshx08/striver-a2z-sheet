// Reverse vowels of a string

#include <bits/stdc++.h>
using namespace std;

string reverseVowels(string s) {
    string v = "aeiouAEIOU";
    int l = 0;
    int r = s.size() - 1;
    while(l <= r) {
        if(v.find(s[l]) != string::npos && v.find(s[r]) != string::npos) {
            swap(s[l], s[r]);
            r--;
            l++;
        }
        else if(v.find(s[l]) != string::npos && !(v.find(s[r]) != string::npos)) {
            r--;
        }
        else if(!(v.find(s[l]) != string::npos) && v.find(s[r]) != string::npos) {
            l++;
        }
        else{
            l++;
            r--;
        }
    }
    return s;
}
int main() {
    string s = "IceCreAm";
    string r = reverseVowels(s);
    cout << r; 
}