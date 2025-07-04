#include <bits/stdc++.h>
using namespace std;

void f(int n){
    // base case
    if(n == 0) return;
    
    // recursive case
    f(n-1); // basically calling for f(9)
    
    cout << n << endl;
}

int main() {
    
    f(10);
   
    return 0;
}
