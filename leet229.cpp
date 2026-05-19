// Majority element - 2

#include <bits/stdc++.h>
using namespace std;

vector<int> majorityElement(vector<int> &nums) {
    int n = nums.size();
    unordered_map<int, int> m;
    for(int i = 0; i < n; ++i) {
        m[nums[i]]++;
    }
    vector<int> r;
    for(auto it : m) {
        if(it.second > n/3) {
            r.push_back(it.first);
        }
    }
    return r;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n; 
        cin >> n;
        vector<int> nums;
        for(int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }
        vector<int> res = majorityElement(nums);
        for(int i = 0; i < res.size(); ++i) {
            cout << res[i] << " ";
        }
        cout << "\n";
    }
}