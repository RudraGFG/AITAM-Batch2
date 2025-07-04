#include <bits/stdc++.h>
using namespace std;

int f(int x, int y){
    // base case
    if(y == 0) return 1; // anything raise to the power 0 is 1 (5^0 =1)
    
    // recursive case
    
    int aff = f(x, y-1);  // friend will give me 5^3
    
    return x * aff; // 5 * (5^3)
}

int main() {
    
    int ans = f(5, 4);
    
    cout << ans;
   
    return 0;
}
