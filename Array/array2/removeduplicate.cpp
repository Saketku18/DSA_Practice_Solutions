#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int>& nums) {
    int n = nums.size();
    if (n == 0) return 0;

    int i = 0; 
    int j = 1; 

    while (j < n) {
        if (nums[j] == nums[i]) {
            j++; 
        } else {
            i++;
            nums[i] = nums[j]; 
            j++;
        }
    }

    return i + 1; // new length of unique elements
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int newSize = removeDuplicates(arr);
    cout << "Size after removal: " << newSize << endl;
    cout << "Array after removing duplicates: ";
    for (int i = 0; i < newSize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
