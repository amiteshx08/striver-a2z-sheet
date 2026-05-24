// Partition array according to given pivot

#include <bits/stdc++.h>
using namespace std;

vector<int> pivotArray(vector<int> &nums, int pivot) {
    int n = nums.size();
    vector<int> ans(n, 0);
    int i = 0; int j = n - 1; //These pointers will be used to iterate over nums
    int ni = 0; int nj = n - 1; //These pointers will be used to iterate over ans

    while(i < n) {
        if(nums[i] < pivot) {
            ans[ni] = nums[i];
            ni++;
        }
        if(nums[j] > pivot) {
            ans[nj] = nums[j]; 
            nj--;
        }
        i++;
        j--;
    }
    while(ni <= nj) {
        ans[ni] = pivot;
        ni++;
    }
    return ans;

}
int main() {
    vector<int> nums = {9,12,5,10,14,3,10};
    int pivot = 10;
    vector<int> r = pivotArray(nums, pivot);
    for(int i = 0; i < r.size(); ++i) {
        cout << r[i] << " ";
    }
}