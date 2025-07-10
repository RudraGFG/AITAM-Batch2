#include<bits/stdc++.h>
using namespace std;

int main() {

    int n = 10;   // Binary: 1010
    int k = 1;    // check the 1st bit (from right)
    
    int mask = 1 << k;

    int result = n & mask;
    
    if(result == 0){
        cout << "Kth Bit is not set";
    }
    else cout << "Kth Bit is set";

	return 0;
}
