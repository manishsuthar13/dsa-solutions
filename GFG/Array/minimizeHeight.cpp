//To minimize the difference between the heights of the tallest and shortest towers
//link: https://www.geeksforgeeks.org/problems/kadanes-algorithm/0
//language: C++
//tags: Array, sorting, greedy
//approach: Sort the array and try partitioning it at every index to adjust elements by +k or -k optimally.
//time complexity: O(n log n)
//space complexity: O(1)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getMinDiff(vector<int> &arr, int k) {
    int n = arr.size();
sort(arr.begin(), arr.end());

int ans = arr[n - 1] - arr[0]; 

int smallest = arr[0] + k;
int largest = arr[n - 1] - k;

for (int i = 0; i < n - 1; i++) {
    int min_elem = min(smallest, arr[i + 1] - k);
    int max_elem = max(largest, arr[i] + k);
    
    if (min_elem < 0) continue;

    ans = min(ans, max_elem - min_elem);
}

return ans;
}
int main() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << getMinDiff(arr, k) << endl;
    
    return 0;
}