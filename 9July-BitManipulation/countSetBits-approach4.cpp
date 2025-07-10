#include<bits/stdc++.h>
using namespace std;

int main() {

  int n = 12;
	int cnt = 0; // to track the no. of set bits in 'n'

	while (n > 0) { // #loop runs = #set bits in n

		cnt++;

		// clear the rightmost set bit of n

		n = n & (n - 1);

	}

	cout << cnt << endl;

	return 0;
}
