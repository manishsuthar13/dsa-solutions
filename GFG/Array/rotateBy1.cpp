//rotate an array by 1 position in clockwise direction
//link: https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one/0
//language: C++
//tags: array, rotation
//approach: move last element to first position and shift all other elements to right by one position
//time complexity: O(n)
//space complexity: O(1)
#include <iostream>
using namespace std;
void rotateByOne(int arr[], int n) {
    if (n <= 1) return;
    int last = arr[n - 1];
    for (int i = n - 1; i > 0; i--) {
        arr[i] = arr[i - 1];
    }
    arr[0] = last;
}
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    rotateByOne(arr, n);
    
    cout << "Array after rotation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    return 0;
}