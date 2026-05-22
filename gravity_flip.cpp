// Gravity flip codeforces

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;

    vector<int> box;
    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        box.push_back(x);
    }
    sort(box.begin(), box.end());
    for(int i = 0; i < n; ++i) {
        cout << box[i] << " ";
    }
}