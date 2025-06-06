// bbinary search 
//link: https://www.geeksforgeeks.org/problems/palindromic-array/0
//language: C++
//tags: Array, binary search, first occurrence
//approach: binary search on sorted array and find the first occurrence of a target value
//time complexity: O(log n)
//space complexity: O(1)
#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> &arr, int target) {
    int left = 0, right = arr.size() - 1;
    int firstOccurrence = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            firstOccurrence = mid;
            right = mid - 1;
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return firstOccurrence;
}
int main() {
    int n, target;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the sorted array:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << "Enter the target value to search for: ";
    cin >> target;

    int result = binarySearch(arr, target);
    if (result != -1) {
        cout << "First occurrence of " << target << " is at index: " << result << endl;
    } else {
        cout << target << " not found in the array." << endl;
    }

    return 0;
}