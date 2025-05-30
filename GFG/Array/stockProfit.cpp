//finding maximum total profit from stock prices, buy or sell stocks at any time
//link: https://www.geeksforgeeks.org/problems/stock-buy-and-sell-1587115621/1
//language: C++
//tags: array, greedy, dynamic programming
//approach: sum up all the profits from consecutive days where the price increases
//time complexity: O(n)
//space complexity: O(1)

#include <iostream>
using namespace std;
int maxProfit(int arr[], int n) {
    int profit = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) {
            profit += arr[i] - arr[i - 1];
        }
    }
    return profit;
}
int main() {
    int n;
    cout << "Enter number of days: ";
    cin >> n;
    int arr[n];
    cout << "Enter stock prices for each day: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int result = maxProfit(arr, n);
    cout << "Maximum profit: " << result << endl;
    return 0;
}