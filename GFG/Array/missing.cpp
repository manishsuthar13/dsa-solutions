//to find the missing number in an array of size n containing numbers from 1 to n+1
//link: https://www.geeksforgeeks.org/problems/missing-number-in-array1416/1?page=1&category=Arrays,Strings,Sorting&sortBy=submissions
//language: C++
//tags: Array, sorting
//approach: sortinf the arrray and then finding the missing number
//time complexity: O(n)
//space complexity: O(1)

#include <bits/stdc++.h>
using namespace std;
int findMissing(int arr[], int n) {
    sort(arr, arr + n);
    for (int i = 0; i < n; i++) {
        if (arr[i] != i + 1) {
            return i + 1;
        }
    }
    return n + 1;
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << findMissing(arr, n) << endl;
    return 0;
}