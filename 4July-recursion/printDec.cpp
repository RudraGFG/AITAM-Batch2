#include <bits/stdc++.h>
using namespace std;

void f(int n){
    // base case
    if(n == 0) return;
    
    // recursive case
     cout << n << endl; // first print then call
     
     
    f(n-1); // basically calling for f(9)

    
    return; // this is optional
}

int main() {
    
    f(10);
   
    return 0;
}
