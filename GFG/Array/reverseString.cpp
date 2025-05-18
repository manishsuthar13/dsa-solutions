//  Problem: Reverse a String/Array (GFG)
//  Link: https://www.geeksforgeeks.org/problems/reverse-a-string/1
//  Language: C++
//  Tags: String, Two Pointers
//  Approach: Swap characters from both ends using two pointers
//  Time Complexity: O(n)
//  Space Complexity: O(1)

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseString(string s) {
    int left = 0, right = s.length() - 1;
    while (left < right) {
        swap(s[left++], s[right--]);
    }
    return s;
}

int main() {
    string s;
    cout<< "Enter a string: ";
    cin >> s;

    cout << "Reversed: " << reverseString(s) << endl;
    return 0;
}
