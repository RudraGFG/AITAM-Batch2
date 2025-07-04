#include <bits/stdc++.h>
using namespace std;

int f(int x, int y){
    // base case
    if(y == 0) return 0;
    // if(y ==1) return x; // for 0 it will fail
    
    
    // recursive case
    
    int aff = f(x, y-1); // friend will multiply x (y-1 times)
    
    return x + aff; // returning 10 + (10*3)
}

int main() {
   
        int ans =f(10, 4);
        
        cout << ans;

    return 0;
}
