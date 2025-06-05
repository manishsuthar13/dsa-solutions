//To check if all elements of an array are palindromic
//link: https://www.geeksforgeeks.org/problems/palindromic-array/0
//language: C++
//tags: Array, Palindrome
//approach: palindromes checks by reversing digits of each numbe
//time complexity: O(n*d)
//space complexity: O(1)

#include <bits/stdc++.h>
using namespace std;
bool isPalinArray(vector<int> &arr) {
    for(int i =0; i<arr.size(); i++){
        int dup = arr[i];
        int res = 0;
        while(dup != 0){
            res = (res*10)+ (dup % 10);
            dup /= 10;
        }
        if (res != arr[i])
        return false;
    }
    return true;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array:" << endl;
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    bool res = isPalinArray(arr);
    if(res) {
        cout << "All elements are palindromic." << endl;
    } else {
        cout << "Not all elements are palindromic." << endl;
    }
    
    return 0;
}