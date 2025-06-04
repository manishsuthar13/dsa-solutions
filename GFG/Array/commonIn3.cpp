//find common elements in three sorted arrays
//link: https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0
//language: C++
//tags: Tags: Two Pointers, Arrays, Intersection, Sorted Arrays
//approach: Use three pointers to traverse the sorted arrays simultaneously, skipping duplicates and collecting common elements
//time complexity: O(n)
//space complexity: O(1)
#include <bits/stdc++.h>
using namespace std;
vector<int> commonIn3(vector<int>& a, vector<int>& b, vector<int>& c) {
    vector<int> result;
    int i = 0, j = 0, k = 0;
    while (i < a.size() && j < b.size() && k < c.size()) {
        if (a[i] == b[j] && b[j] == c[k]) {
            result.push_back(a[i]);
            i++; j++; k++;
        } else if (a[i] < b[j]) {
            i++;
        } else if (b[j] < c[k]) {
            j++;
        } else {
            k++;
        }
    }
    return result;
}
int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {2, 3, 5, 6};
    vector<int> c = {1, 2, 3, 4, 5};
    
    vector<int> commonElements = commonIn3(a, b, c);
    
    cout << "Common elements in three sorted arrays: ";
    for (int num : commonElements) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}