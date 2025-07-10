#include<bits/stdc++.h>
using namespace std;

int main() {

    int n = 10;   // Binary: 1010
    int k = 2;    // Set the 2nd bit (from right)
    
    int mask = 1 << k;

    int result = n | mask;
    
    cout << "Original number: " << n << endl;
    cout << "After setting Kth bit: " << result << endl;

	return 0;
}
