// Subarray sum equals k 

#include <bits/stdc++.h>
using namespace std;

int subarraySum(vector<int> &nums, int k) {
    int n = nums.size();
    int s = 0;
    int count = 0;
    for(int i = 0; i < n; ++i) {

        for(int j = i; j < n; ++j) {
            // calculate the running sum here.
            s += nums[j];
            if(s == k) {
                count++;
            }
            
        }
        s = 0;
    }
    return count;
}
int main() {
    int t;
    cin >> t;
    while(t--) {
        vector<int> nums;
        int n, k;
        cin >> n;
        cin >> k;

        for(int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }
        cout << subarraySum(nums, k) << endl;
    }
}