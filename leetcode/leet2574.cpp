// Left and right sum differences

#include <bits/stdc++.h>
using namespace std;

vector<int> leftRightDifference(vector<int> &nums)
{
    int n = nums.size();

    int leftSum = 0;
    vector<int> left = {0};
    for(int i = 1; i < n; ++i) {
        leftSum += nums[i - 1];
        left.push_back(leftSum);
    }

    int rightSum = 0;
    vector<int> right;
    for(int i = 0; i < n; ++i) {
        for(int j = i; j < n - 1; ++j) {
            rightSum += nums[j + 1];
        }
        right.push_back(rightSum);
        rightSum = 0;
    }
    vector<int> res;
    for(int i = 0; i < n; ++i) {
        int r = abs(left[i] - right[i]);
        res.push_back(r);
    }

    return res;
}
int main() {
    vector<int> nums = {10,4,8,3};
    vector<int> res = leftRightDifference(nums);
    for(int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
}