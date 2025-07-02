#include <bits/stdc++.h>
using namespace std;

int firstOccurrence(vector<int>& arr, int target) {
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int lastOccurrence(vector<int>& arr, int target) {
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

vector<int> allOccurrences(vector<int>& arr, int target) {
    vector<int> result;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == target)
            result.push_back(i);
    }
    return result;
}

int main() {
    vector<int> arr = {1, 2, 2, 2, 3, 4, 5};
    int target = 2;

    int first = firstOccurrence(arr, target);
    int last = lastOccurrence(arr, target);
    vector<int> all = allOccurrences(arr, target);

    cout << "First Occurrence: " << first << endl;
    cout << "Last Occurrence: " << last << endl;

    cout << "All Occurrences at indices: ";
    for (int idx : all) {
        cout << idx << " ";
    }
    cout << endl;

    return 0;
}
