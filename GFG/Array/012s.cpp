//sort array in ascending order containing only 0,1 and 2's [don't use any sorting algorithm]
//link: https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s/0
//language: C++
//tags: Array, sorting, 2pointers
//approach: dutch national flag algorithm
//time complexity: O(n)
//space complexity: O(1)

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array (0, 1, 2): ";
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int start = 0, mid = 0, end = n - 1;
    while(mid<=end){
        if(arr[mid] == 0){
            swap(arr[start++],arr[mid++]);
        }else if(arr[mid] == 1){
            mid++;
        }else{
            swap(arr[mid],arr[end--]);
        }
    }
    cout << "Sorted array: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}