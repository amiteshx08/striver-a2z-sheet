// Find minimum operations to make all elements divisible by three

#include <bits/stdc++.h>
using namespace std;

int minOperation(vector<int> &nums) {
    int n = nums.size();
    int count = 0;
    for(int i = 0; i < n; ++i) {
        if(nums[i] != 0) {
            count += min(nums[i] % 3, 3 - (nums[i] % 3));
        }
        
    }
    return count;
}
int main() {
    vector<int> nums = {1,2,3,4};
    cout << minOperation(nums);
}