#include <bits/stdc++.h>
using namespace std;

void f(int n, vector<string>& spellMap){
    // base case
    if(n == 0) return;
    
    // recursive case
    
    // call for n/10
    f(n/10, spellMap);
    
    // extract digit to be printed
    int d = n%10;
    
    cout << spellMap[d] << endl;
    
    return; // this is optional
}

int main() {
    
    vector<string> spellMap = {
        "zero", "one", "two", "three",
        "four", "five", "six", "seven",
        "eight", "nine"
    };
    
    f(8721, spellMap);
   
    return 0;
}
