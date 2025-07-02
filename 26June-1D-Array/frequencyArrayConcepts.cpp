#include <bits/stdc++.h>
using namespace std;

int main() {
	string s = "abacabad";
	
    vector<int> freq(26, 0);

    for (char ch : s){
        int idx = ch - 'a';
        freq[idx]++;
    }
    
    for(int i : freq){
        cout << i << endl;
    }
    

    return 0;
}
