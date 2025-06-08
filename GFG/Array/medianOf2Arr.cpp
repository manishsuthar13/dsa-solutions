//median of 2 sorted arrays of different sizes
//link: https://www.geeksforgeeks.org/problems/median-of-2-sorted-arrays-of-different-sizes/1
//language: C++
//tags: Binary Search, Arrays, Median
//approach: Binary Search on Partition Index
//time complexity: O(log(min(n, m)))
//space complexity: O(1)

#include <bits/stdc++.h>
using namespace std;
double medianOf2(vector<int>& a, vector<int>& b) {
     if (a.size() > b.size()) return medianOf2(b, a);
int n = a.size(), m = b.size();
int low = 0, high = n;
while (low <= high) {
    int cutA = (low + high) / 2;
    int cutB = (n + m + 1) / 2 - cutA;
    int leftA = (cutA == 0) ? INT_MIN : a[cutA - 1];
    int leftB = (cutB == 0) ? INT_MIN : b[cutB - 1];
    int rightA = (cutA == n) ? INT_MAX : a[cutA];
    int rightB = (cutB == m) ? INT_MAX : b[cutB];
    if (leftA <= rightB && leftB <= rightA) {
        if ((n + m) % 2 == 0)
            return (max(leftA, leftB) + min(rightA, rightB)) / 2.0;
        else
            return max(leftA, leftB);
    } else if (leftA > rightB) {
        high = cutA - 1;
    } else {
        low = cutA + 1;
    }
}
return -1.0;
}
int main() {
    vector<int> a = {1, 3, 8};
    vector<int> b = {7, 9, 10, 11};
    cout << "Median of two sorted arrays is: " << medianOf2(a, b) << endl;
    return 0;
}