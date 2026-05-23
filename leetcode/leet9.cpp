// Palindrome number

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(int n) {
    int rev = 0;
    int original = n;
    while(n != 0) {
        int l = n % 10;
        if(rev > INT_MAX / 10 || rev < INT_MIN / 10) return false;
        rev = rev * 10 + l;
        n /= 10;
    }
    return rev == original;
}
int main() {
    int n = 565;
    cout << isPalindrome(n);
}