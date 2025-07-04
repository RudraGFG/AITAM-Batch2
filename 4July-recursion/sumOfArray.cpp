#include <bits/stdc++.h>
using namespace std;

int f(vector<int>& arr, int i){
    // base case
    if(i == arr.size()) return 0;
    
    // recursive case
    
    int aff = f(arr, i+1); // sum from index 1 
    
    return arr[i] + aff; // sum from index 0 = arr[0] + sum from index 1
}

int main() {
   
   vector<int> arr = {-9, -8, -5, -1};
   
   int ans = f(arr, 0);
   
   cout << ans;
   
    return 0;
}
