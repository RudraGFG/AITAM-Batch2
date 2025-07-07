#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {50, 40, 30, 20, 10};
    
    int n = arr.size();
    
    for(int i=0; i<n-1; i++){
        
        int cpos = i;
        int minIdx = i;
        
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIdx]) minIdx = j;
        }
        
        swap(arr[cpos], arr[minIdx]);
    }
    
    for(int i : arr) cout << i << " ";

    return 0;
}
