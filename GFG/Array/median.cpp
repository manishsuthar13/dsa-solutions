//find median of an array of integer
//link: https://www.geeksforgeeks.org/problems/find-the-median0527/1
//language: C++
//tags: Tags: array, sorting, median
//approach: the median of an unsorted integer array using in-place sorting and middle element(s) extraction.
//time complexity: O(nlogn)
//space complexity: O(1)

#include <bits/stdc++.h>
using namespace std;
double findMedian(vector<int> &arr) {
    sort(arr.begin(), arr.end());
    if(arr.size() % 2 == 0){
         int mid = arr.size()/2;
         double res = (arr[mid]+arr[mid-1])/2.0;
        return res;
    }else{
        int mid = arr.size()/2;
        return arr[mid];
    }
}
int main() {
    vector<int> arr = {12, 3, 5, 7, 19};
    cout << "Median: " << findMedian(arr) << endl;
    return 0;
}