#include<bits/stdc++.h>
using namespace std;

int main() {

    int n = 10;   // Binary: 1010
    int k = 1;    // Clear the 1st bit (from right)
    
    int mask = ~(1 << k);

    int result = n & mask;
    
    cout << "Original number: " << n << endl;
    cout << "After clearing Kth bit: " << result << endl;

	return 0;
}
