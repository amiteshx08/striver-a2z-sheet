// Restore finishing order
#include <bits/stdc++.h>
using namespace std;

vector<int> recoverOrder(vector<int> &order, vector<int> &friends) {
    vector<int> r;
    for(int i = 0; i < order.size(); ++i) {
        for(int j = 0; j < friends.size(); ++j) {
            if(order[i] == friends[j]) {
                r.push_back(order[i]);
            }
        }
    }
    return r;
}

int main() {
    vector<int> order = {3,1,2,5,4};
    vector<int> friends = {1,3,4};
    vector<int> r = recoverOrder(order, friends);
    for(int i = 0; i < r.size(); ++i) {
        cout << r[i] << " ";
    }
}
