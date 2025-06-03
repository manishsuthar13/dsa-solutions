//To return the duplictae elements in an array
//link: https://www.geeksforgeeks.org/problems/find-duplicates-in-an-array/1
//language: C++
//tags: Array, hashset, hashinig, unordered_set, duplicate elements
//approach: using 2 unordered sets to store the elements and check for duplicates
//time complexity: O(n)
//space complexity: O(n)

#include <bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(int arr[], int n) {
    unordered_set<int> seen;
    unordered_set<int> duplicates;
    
    for (int i = 0; i < n; i++) {
        if (seen.find(arr[i]) != seen.end()) {
            duplicates.insert(arr[i]);
        } else {
            seen.insert(arr[i]);
        }
    }
    
    return vector<int>(duplicates.begin(), duplicates.end());
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> duplicates = findDuplicates(arr, n);
    
    if (duplicates.empty()) {
        cout << "No duplicates found" << endl;
    } else {
        cout << "Duplicate elements: ";
        for (int num : duplicates) {
            cout << num << " ";
        }
        cout << endl;
    }
    
    return 0;
}