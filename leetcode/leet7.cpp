// Reverse a number

#include <bits/stdc++.h>
using namespace std;

int revNum(int n) {
    int newNum = 0;
    while(n != 0) {
        int l = n % 10;
        if(newNum > INT_MAX / 10 || newNum < INT_MIN / 10) return 0;
        newNum  = newNum * 10 + l;
        n /= 10;
    }
    return newNum;
}
int main() {
    int n = 1534236469;
    cout << revNum(n);
}