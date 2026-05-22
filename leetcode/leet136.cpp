// Single number

#include <bits/stdc++.h>
using namespace std;

int singleNum(vector<int> &nums) {
    int n = nums.size();
    int r = 0;
    for(int i = 0; i < n; ++i) {
       r ^= nums[i]; 
    }
    return r;
    
}
int main() {
    vector<int> nums = {4, 1, 2, 1, 2};
    cout << singleNum(nums);
}