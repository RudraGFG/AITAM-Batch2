#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {100, 200, 300, 400, 4};
    
    int n = arr.size();
    
    stack<int> st;
    vector<int> ans(n, 0);
    
    for(int i=0; i<n; i++){
        // pop elements from stack
        while(!st.empty() && st.top() >= arr[i]) st.pop();
        
        if(st.empty()) ans[i] = -1;
        else ans[i] = st.top();
        
        st.push(arr[i]);
    }
    
    for(int i : ans) cout << i << " ";

    return 0;
}
