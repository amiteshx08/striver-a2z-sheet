// Password strength 

#include <bits/stdc++.h>
using namespace std;

int passwordStrength(string password) {
    unordered_set<char> d_letter;
    string special = "!@#$";
    for(int i = 0; i < password.size(); ++i) {
        d_letter.insert(password[i]);
    }
    int strength = 0;
    for(char c : d_letter) {
        if(c >= 97) {
            strength += 1;
        }
        if(c >= 65 && c <= 90) {
            strength += 2;
        }
        if(isdigit(c)) {
            strength += 3;
        }
        if(special.find(c) != string::npos) {
            strength += 5;
        }

    }
    return strength;
}
int main() {
    string password = "bbBB11#";
    cout << passwordStrength(password);
}