//find the longest consequtive subsequence in an array
//link: https://www.geeksforgeeks.org/problems/longest-consecutive-subsequence/0
//language: C++
//tags: array, unordered set, hashing
//approach: single loop on unordered set
//time complexity: O(n)
//space complexity: O(n)

#include <bits/stdc++.h>
using namespace std;
int longestConsecutive(vector<int>& arr) {
    unordered_set<int> nums (arr.begin(), arr.end());
    int maxLen = 0 ;
    for(int i : nums){
        if(nums.find(i-1) == nums.end()){
            int currNum = i;
            int currLen = 1;
            while(nums.find(currNum+1) != nums.end()){
                currNum++;
                currLen++;
            }
            maxLen = max(maxLen, currLen);
        }
    }
    return maxLen;
}
int main() {
    vector<int> arr = {100, 4, 200, 1, 3, 2};
    cout << "Length of the longest consecutive subsequence is: " << longestConsecutive(arr) << endl;
    return 0;
}