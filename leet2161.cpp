// Partition array according to given pivot

#include <bits/stdc++.h>
using namespace std;

vector<int> pivotArray(vector<int> &nums, int pivot) {
    int n = nums.size();
    vector<int> nums_s;
    vector<int> nums_b;
    vector<int> pivots;
    for(int i = 0; i < n; ++i) {
        if(nums[i] < pivot) {
            nums_s.push_back(nums[i]);
        }
        if(nums[i] > pivot) {
            nums_b.push_back(nums[i]);
        }
        if(nums[i] == pivot){
            pivots.push_back(nums[i]);
        }
    }
    
    vector<int> t;
    // Merging logic
    
    for(int j = 0; j < nums_s.size(); ++j) {
        t.push_back(nums_s[j]);
    }
    for(int k = 0; k < pivots.size(); ++k) {
        t.push_back(pivots[k]);
    }
    for(int l = 0; l < nums_b.size(); ++l) {
        t.push_back(nums_b[l]);
    }
    
    
    return t;
}
int main() {
    vector<int> nums = {-3,4,3,2};
    int pivot = 2;
    vector<int> r = pivotArray(nums, pivot);
    for(int i = 0; i < r.size(); ++i) {
        cout << r[i] << " ";
    }
}