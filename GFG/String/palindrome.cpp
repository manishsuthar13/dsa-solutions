//to check if the string is a palindrome or not
//link: https://www.geeksforgeeks.org/problems/palindrome-string0817/1
//language: C++
//tags: string, palindrome, two-pointer
//approach: two pointer approach
//time complexity: O(n)
//space complexity: O(1)

#include <iostream>
using namespace std;
bool isPalindrome(string& s) {
    size_t len = s.size();
    for(int i=0;i<len/2;i++){
        if(s[i] != s[len-i-1]){
            return false;
        }
    }
    return true;
}

int main() {
    string s;
    cout << "Enter a string: ";
    cin >> s;
    if(isPalindrome(s)){
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }
    return 0;
}