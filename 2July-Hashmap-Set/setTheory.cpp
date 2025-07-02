#include <bits/stdc++.h>
using namespace std;

int main() {
    unordered_set<int> uset;

    // Insert elements
    uset.insert(10);
    uset.insert(20);
    uset.insert(30);
    uset.insert(20);  // duplicate, won't be added again
    uset.insert(40);

    // Print initial set
    cout << "Initial set:\n";
    for (int val : uset) {
        cout << val << " ";
    }
    cout << endl << endl;

    // Size of the set
    cout << "Size of set: " << uset.size() << endl;

    // Check if set is empty
    if (uset.empty()) {
        cout << "Set is empty." << endl;
    } else {
        cout << "Set is not empty." << endl;
    }

    cout << endl;

    // Find element
    int key = 30;
    if (uset.find(key) != uset.end()) {
        cout << "Element " << key << " found in the set." << endl;
    } else {
        cout << "Element " << key << " not found." << endl;
    }

    // Erase element
    uset.erase(20);
    cout << endl;
    cout << "Set after erasing 20:" << endl;
    for (int val : uset) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
