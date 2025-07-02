#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    
    int n = arr.size();
    vector<int> suff(n, 0);
    
    // copy last element
    suff[n-1] = arr[n-1];
    
    // fill suffix array
    for(int i=n-2; i>=0; i--) suff[i] = suff[i+1] + arr[i];
    
    // print suffix array
    for(int i=0; i<n; i++) cout << suff[i] << " ";

    return 0;
}
