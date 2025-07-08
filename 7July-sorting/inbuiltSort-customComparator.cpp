#include <bits/stdc++.h>
using namespace std;

bool myCustomComp(int a, int b){
    // return true if order is correct
    // return false if order is incorrect and you want change
    
    // descending order implemented
    if(a > b) return true;
    else return false;
}

int main() {
    vector<int> arr = {-100, 1000, -200, 2000};
    
    sort(arr.begin(), arr.end(), myCustomComp);
    
    // inbuilt descending feature by C++ :-
    // sort(arr.begin(), arr.end(), greater<int>());
    
    for(int i : arr) cout << i << " ";

    return 0;
}
