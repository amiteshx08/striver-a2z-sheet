// Longest consecutive sequence

#include <bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int> &nums) {
    unordered_set<int> s;
    int n = nums.size();
    for(int i = 0; i < n; ++i) {
        s.insert(nums[i]);
    }
    int count = 1; 
    int streak = 1;
    //Iterator
    unordered_set<int> :: iterator it;
    for(it = s.begin(); next(it) != s.end(); it++) {
        int c = *it;
        int n = *next(it);
        if(n - c == 1) {
            count++;
        }
        else {
            streak = max(count, streak);
            count = 1;
        }
    }
    return max(streak, count);
}

int main() {
    vector<int> nums = {100,4,200,1,3,2};
    cout << longestConsecutive(nums);
}