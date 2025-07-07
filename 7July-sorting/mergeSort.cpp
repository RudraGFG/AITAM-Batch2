#include <bits/stdc++.h>
using namespace std;

void merge2SortedArrays(vector<int>& arr, int l, int m, int h){
    
    vector<int> arr1(m-l+1, 0), arr2(h-m, 0);
    
    // put values of left part in arr1
    int n1 = arr1.size();
    for(int i=0; i<n1; i++){
        arr1[i] = arr[l+i];
    }
    
     // put values of right part in arr2
    int n2 = arr2.size();
    for(int i=0; i<n2; i++){
        arr2[i] = arr[m+1+i];
    }
    
    // merge 2 sorted arrays
    
    int i = 0, j = 0, k = l;
    
    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            arr[k] = arr1[i];
            i++;
            k++;
        }
        else{
            arr[k] = arr2[j];
            j++;
            k++;
        }
    }
    
    // if rem. elements in arr1
    while(i < n1){
        arr[k] = arr1[i];
        i++;
        k++;
    }
    
    // if rem. elements in arr2
    while(j < n2){
        arr[k] = arr2[j];
        j++;
        k++;
    }
    
}

void mergeSort(vector<int>& arr, int low, int high){
    // base case
    if(low >= high) return; // if only 1 el. is remaining
    
    // recursive case
    
    int mid = (low+high)/2;
    
    // left part
    mergeSort(arr, low, mid);
    
    // right part
    mergeSort(arr, mid+1, high);
    
    merge2SortedArrays(arr, low, mid, high);
}

int main() {
    vector<int> arr = {50, 40, 30, 20, 10};
    
    
    mergeSort(arr, 0, arr.size()-1);
    
    for(int i : arr) cout << i << " ";

    return 0;
}
