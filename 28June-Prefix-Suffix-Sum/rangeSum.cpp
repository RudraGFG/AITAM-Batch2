#include <bits/stdc++.h>
using namespace std;

int rangeSum(vector<int>& pre, int l, int r){
    if(l == 0) return pre[r];
    else return pre[r] - pre[l-1];
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    int n = arr.size();
    vector<int> pre(n, 0);
    
    // copy first element
    pre[0] = arr[0];
    
    // fill prefix array
    for(int i=1; i<=n-1; i++) pre[i] = pre[i-1] + arr[i];
    
    int ans = rangeSum(pre, 2, 4);
    
    cout << ans;

    return 0;
}
