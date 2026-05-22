// Majority element

#include <bits/stdc++.h>
using namespace std;

int majority(vector<int> &nums) {
    int n = nums.size();
    // A map -> key with the highest value
    /*map<int, int> freq;
    for(int i = 0; i < n; ++i) {
        freq[nums[i]]++;
    }
    int mx = 0;
    int res = 0;
    for(auto it : freq) {
        if(it.second > mx) {
            mx = it.second;
            res = it.first;
        }
    }
    return res;*/
    
}
int main() {
    vector<int> nums = {3, 2, 3};
    cout << majority(nums);
}