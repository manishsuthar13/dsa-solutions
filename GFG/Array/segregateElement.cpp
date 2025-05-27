//Segregate positive and negative numbers in an array
//link: https://www.geeksforgeeks.org/problems/move-all-negative-elements-to-end1813/1
//language: C++
//tags: Array, sorting, vector
//approach: sorting positive and negative number but keeping them in same order using extra space of n
//time complexity: O(n)
//space complexity: O(n)
#include <iostream>
#include <vector>
using namespace std;
void segregateElements(int arr[], int size) {
    vector<int> temp;
    for(int i=0; i<size; i++){
        if(arr[i] >= 0){
            temp.push_back(arr[i]);
        }
    }
    for(int i=0; i<size; i++){
        if(arr[i] < 0){
            temp.push_back(arr[i]);
        }
    }
    for(int i=0; i<size; i++){
        arr[i] = temp[i];
    }
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array (positive and negative integers):" << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    segregateElements(arr,n);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}