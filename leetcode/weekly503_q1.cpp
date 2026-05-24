// Limit occurences in sorted array

#include <bits/stdc++.h>
using namespace std;

vector<int> limitOccurences(vector<int> &nums, int k) {
    int n = nums.size();
    vector<int> x;
    map<int, int> f;
    for(int i = 0; i < n; ++i) {
        f[nums[i]]++;
    }
    for(auto it : f){
        if(it.second >= k) {
            for(int i = 0; i < k; ++i) {
                x.push_back(it.first);
            }
        }
        if(it.second < k) {
            for(int i = 0; i < it.second; ++i) {
                x.push_back(it.first);
            }
        }
    }
    return x;
}
int main() {
    vector<int> nums = {1,2,3};
    int k = 3;
    vector<int> r = limitOccurences(nums, k);
    for(int i = 0; i < r.size(); ++i) {
        cout << r[i] << " ";
    }
}