// codeforces 155 A

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int amazing = 0;
    vector<int> point;

    for(int i = 0; i < n; ++i) {
        int x;
        cin >> x;

        point.push_back(x);
    }
    int best = point[0];
    int worst = point[0];
    for(int j = 1; j < n; ++j) {
        if(point[j] > best) {
            best = point[j];
            amazing++;
        }
        if(point[j] < worst) {
            worst = point[j];
            amazing++;
        }
    }
    cout << amazing;
}