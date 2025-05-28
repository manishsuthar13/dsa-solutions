//To find the maximum sum of a subarray
//link: https://www.geeksforgeeks.org/problems/kadanes-algorithm/0
//language: C++
//tags: Array, Dynamic Programming, Kadane's Algorithm
//approach: kadane's algorithm
//time complexity: O(n)
//space complexity: O(1)
#include <bits/stdc++.h>
using namespace std;

int maxSubarraySum(vector<int> &arr) {
    int maxSum = INT_MIN, tempSum = 0;
    for(int n : arr){
        tempSum+= n;
        maxSum = max(maxSum, tempSum);
        if(tempSum < 0){
            tempSum = 0;
        }
    }
    return maxSum;
}

int main(){
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array:" << endl;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    int res = maxSubarraySum(arr);
    cout << "The maximum sum of a subarray is: " << res << endl;
    
    return 0;
}