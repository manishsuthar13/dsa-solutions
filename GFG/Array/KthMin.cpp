//find the kth minimum element from given array
//link: https://www.geeksforgeeks.org/problems/kth-smallest-element/0
//language: C++
//tags: Array, Searching, sorting
//approach: brute force
//time complexity: O(k * n)
//space complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int kthMin(int arr[], int k, int size){
    int min = INT_MIN;
    for(int i = 0; i<k; i++){
        int temp = INT_MAX;
        for(int j=0; j< size;j++){
            if(arr[j]>min && arr[j]<temp){
                temp = arr[j];
            }
        }
        min = temp;
    }
    return min;
}

int main(){
    int size,k;
    cout<<"size of array:";
    cin >> size;
    int arr[size];
    cout<<"array elements: ";
    for(int i= 0;i<size;i++){
        cin>> arr[i];
    }
    cout<<"enter the value of k:"; //k must be less than size of array
    cin >> k;
    int num = kthMin(arr,k,size);
    cout<< k<<"th smallest element is"<<num;
    return 0;
}