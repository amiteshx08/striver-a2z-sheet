// Count the number of special characters 2

#include <bits/stdc++.h>
using namespace std;
int numberOfSpecialCharacters(string s) {
    int n = s.size();
    vector<int> lower(26, -1);
    vector<int> upper(26, -1);


    for(int i = 0; i < n; ++i) {
        if(islower(s[i])) {
            lower[s[i] - 'a'] = i;
        } 
        else if(isupper(s[i])) {
            int idx = s[i] - 'A';
            if(upper[idx] == -1) {
                upper[idx] = i;
            }
        }
    }

    int special = 0;

    for(int i = 0; i < 26; ++i) {
        if(lower[i] != -1 && upper[i] != -1 && lower[i] < upper[i]) {
            special++;
        }
    }
    return special;
}
int main() {
    string s = "aaAbcBC";
    cout << numberOfSpecialCharacters(s);
}