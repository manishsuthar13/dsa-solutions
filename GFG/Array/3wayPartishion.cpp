//three way partitioning of an array into three parts around range [a, b]
//link: https://www.geeksforgeeks.org/problems/three-way-partitioning/1
//language: C++
//tags: arrays, partitioning, twopointers, dutch-national-flag
//approach: Rearrange array into three parts around range [a, b] in O(n) time & O(1) space using Dutch National Flag Algorithm.
//time complexity: O(n)
//space complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

void threeWayPartition(vector<int>& arr, int a, int b) {
    int start = 0, end = arr.size() - 1;
    int i = 0;

    while (i <= end) {
        if (arr[i] < a) {
            swap(arr[i], arr[start]);
            start++;
            i++;
        } else if (arr[i] > b) {
            swap(arr[i], arr[end]);
            end--;
        } else {
            i++;
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 3, 4};
    int a = 1, b = 2;

    threeWayPartition(arr, a, b);

    cout << "Modified array: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    return 0;
}
