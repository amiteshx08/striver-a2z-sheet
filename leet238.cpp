// Move Zeroes

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums) {
    int n = nums.size();
    int l, r; 
    l = 0; r = 0;
    while(r < n) {
        if(nums[r] != 0) {
            swap(nums[l], nums[r]);
            l++; 
        }
        r++;
    }
}

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    moveZeroes(nums);

    for(int i = 0; i < nums.size(); ++i) {
        cout << nums[i] << " ";
    }
}