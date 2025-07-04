#include <bits/stdc++.h>
using namespace std;

int fibo(int n){
    // base case
    if(n == 1) return 1;
    if(n == 0) return 0;
    
    // recursive case
    
    int afl = fibo(n-1);
    int afr = fibo(n-2);
    
    return afl+afr;
}

int main() {
    
   for(int i=0; i<=10; i++){
       int ans =fibo(i);
       
       cout << "The " << i << "'th fibonacci number is: " << ans << endl;
   }

    return 0;
}
