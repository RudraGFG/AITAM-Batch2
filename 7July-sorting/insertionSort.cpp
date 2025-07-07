#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {-50, 40, -30, 20, 100};
    
    int n = arr.size();
    
    for(int i=1; i<n; i++){
        int key = arr[i];
        int j = i-1;
        
        while(j >= 0 && arr[j] > key){
            // shift towards right
            // to make space for key
            
            arr[j+1] = arr[j];
            j--;
        }
        
        // insert the key
        arr[j+1] = key;
    }
    
    for(int i : arr) cout << i << " ";

    return 0;
}
