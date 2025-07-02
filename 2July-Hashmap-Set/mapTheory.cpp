#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_map<int, int> mp;
    
    vector<int> arr = {10, 10, 20, 20, 30, 40, 40, 40, 50};
    
    for (int i : arr) mp[i]++;
    
    // printing the map
    cout << "Initial Map:\n";
    for (pair<int, int> p : mp) {
        cout << "Key is: " << p.first << endl;
        cout << "Value is: " << p.second << endl;
    }
    
    cout << endl;

    // insert function
    mp.insert({100, 2});
    mp.insert({900, 5});
    
    cout << "Map after inserting:\n";
    for (pair<int, int> p : mp) {
        cout << "Key is: " << p.first << endl;
        cout << "Value is: " << p.second << endl;
    }

    cout << endl;

    // erase function
    mp.erase(100);
    
    cout << "Map after erasing key 100:\n";
    for (pair<int, int> p : mp) {
        cout << "Key is: " << p.first << endl;
        cout << "Value is: " << p.second << endl;
    }

    cout << endl;

    // size function
    int sz = mp.size();
    cout << "Size of the map is: " << sz << endl;

    // empty function
    if (mp.empty()) {
        cout << "Map is empty.\n";
    } else {
        cout << "Map is not empty.\n";
    }

    cout << endl;

    // find function
    int key = 900;
    auto it = mp.find(key);
    if (it != mp.end()) {
        cout << "Key " << key << " found with value " << it->second << endl;
    } else {
        cout << "Key " << key << " not found.\n";
    }

    return 0;
}
