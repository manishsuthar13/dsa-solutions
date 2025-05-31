//given set arrays a and b, find the number of elements in union of the two sets
//link: https://www.geeksforgeeks.org/problems/union-of-two-arrays/0
//language: C++
//tags: array, hashing, set, union
//approach: using a set to store unique elements from both arrays
//time complexity: O(n+m)
//space complexity: O(1+m)

#include <bits/stdc++.h>
using namespace std;

int findUnion(vector<int>& a, vector<int>& b) {
    unordered_set <int> total;
    for(int num : a)
    total.insert(num);
    for(int num : b)
        total.insert(num);
        
        return total.size();
}
int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {3, 4, 5, 6, 7};
    
    cout << "Number of elements in union: " << findUnion(a, b) << endl;
    
    return 0;
}