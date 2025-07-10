#include<bits/stdc++.h>
using namespace std;

int main() {

  	int n = 7;
	int cnt = 0; // to track the no. of set bits in 'n'

	while (n > 0) { // #times loop runs = logn

		// 1. extract the rightmost bit of n

		int rightmostbit = n & 1;

		if (rightmostbit == 1) {
			cnt++;
		}

		n = n >> 1;

	}

	cout << cnt << endl;

	return 0;
}
