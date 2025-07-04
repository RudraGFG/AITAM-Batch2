#include <bits/stdc++.h>
using namespace std;

int f(int n){
    // base case
    if(n == 0) return 1;
    
    // recursive case
    
    int ansFromFriend = f(n-1); // recursion will handle 4!
    
    return n * ansFromFriend; // 5 * 4!
}

int main() {
    
    int ans = f(5);
    
    cout << ans;

    return 0;
}
