#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {-50, 40, 30, -20, 10};
    
    int n = arr.size();
    
    for(int i=0; i<n-1; i++){
        
        // place largest el. from unsorted part
        // to its correct position
        
        for(int j=0; j<n-i-1; j++){
            // prv element > next element
            if(arr[j] > arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }
    
    for(int i : arr) cout << i << " ";

    return 0;
}
