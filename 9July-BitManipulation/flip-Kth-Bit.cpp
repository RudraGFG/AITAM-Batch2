#include<bits/stdc++.h>
using namespace std;

int main() {

    int n = 10;   // Binary: 1010
    int k = 3;    // flip the 3rd bit (from right)
    
    int mask = 1 << k;

    int result = n ^ mask;
    
    cout << "Original number: " << n << endl;
    cout << "After flipping Kth Bit: " << result << endl;
    
    return 0;
}
