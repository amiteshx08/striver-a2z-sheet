// Rotate array

#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int> &nums, int k) {
    int n = nums.size();
    k = k % n;
    vector<int> new_v(n, 0);
    for(int i = 0; i < n; ++i) {
        new_v[(i + k) % n] = nums[i];
    }
    nums = new_v;
}

int main() {
    vector<int> nums = {1,2,3,4};
    int k = 2;
    rotate(nums, k);

    for(int i = 0; i < nums.size(); ++i) {
        cout << nums[i] << " ";
    }

}