// Max consecutive ones

#include <bits/stdc++.h>
using namespace std;

int findMaxOnes(vector<int> &nums) {
    int n = nums.size();
    int l = 0;
    int r = 0;
    int mx = 0;
    while(r < n) {
        if(nums[r] != 0) r++;
        else {
            ++r;
            l = r;
            
        }
        int res = r - l;
        mx = max(mx, res);
    }
    return mx;
}
int main() {
    vector<int> nums = {1, 1, 0, 1};
    cout << findMaxOnes(nums);

}