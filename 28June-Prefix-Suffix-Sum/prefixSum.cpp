#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    int n = arr.size();
    vector<int> pre(n, 0);
    
    // copy first element
    pre[0] = arr[0];
    
    // fill prefix array
    for(int i=1; i<n; i++) pre[i] = pre[i-1] + arr[i];
    
    // print prefix array
    for(int i=0; i<n; i++) cout << pre[i] << " ";

    return 0;
}
