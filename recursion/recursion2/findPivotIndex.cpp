#include <bits/stdc++.h>
using namespace std;

int findPivot(vector<int>& arr, int i, int leftSum, int totalSum) {
    if (i == arr.size()) return -1;
    int rightSum = totalSum - leftSum - arr[i];
    if (leftSum == rightSum) return i;
    return findPivot(arr, i + 1, leftSum + arr[i], totalSum);
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        totalSum += arr[i];
    }

    int pivotIndex = findPivot(arr, 0, 0, totalSum);
    cout << pivotIndex << endl;
}
