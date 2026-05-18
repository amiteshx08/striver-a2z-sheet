// Rearrange array elements by sign

#include <bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int> &nums) {
    int n = nums.size();
    vector<int> neg;
    vector<int> pos;
    vector<int> mer;

    for(int i = 0; i < n; ++i) {
        if(nums[i] < 0) {
            neg.push_back(nums[i]);
        }
        if(nums[i] > 0) {
            pos.push_back(nums[i]);
        }
    }
    int i = 0;
    int k = 0;
    while(k < n) {
        if(!(k % 2)) {
            mer.push_back(pos[i]);
            k++;
        }
        if(k % 2) {
            mer.push_back(neg[i]);
            k++;
            i++;
        }
    }

    return mer;
}
int main() {
    vector<int> nums = {3,1,-2,-5,2,-4};
    vector<int> res = rearrange(nums);
    for(int i = 0; i < res.size(); ++i) {
        cout << res[i] << " ";
    }
    
}