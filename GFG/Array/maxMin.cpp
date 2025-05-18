//find the maximum and minimum element in an array
//link: https://www.geeksforgeeks.org/problems/find-minimum-and-maximum-element-in-an-array4428/1
//language: C++
//tags: Array, Searching
//approach: linear search
//time complexity: O(n)
//space complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

pair<int,int> minMax(int arr[], int n){
    pair<int,int> p {arr[0], arr[0]};
    for(int i=0; i<n; i++){
        if(arr[i] < p.first){
            p.first = arr[i];
        }
        if(arr[i] > p.second){
            p.second = arr[i];
        }
    }
    return p;
}


int main(){
    int n;
    cout << "number of elements in the array: ";
    cin >> n;
    int arr[n];
    cout <<"elements:";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout<<"minimum and maximum element in the array: ";
    pair<int,int> p = minMax(arr, n);
    cout << p.first << " " << p.second << endl;
    return 0;
}
