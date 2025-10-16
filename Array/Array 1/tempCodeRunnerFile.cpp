#include<bits/stdc++.h>
using namespace std;
void rotateRight(vector<int>& arr, int k) {
    int n = arr.size();
    k = k % n;
    vector<int> temp(n);
    for (int i = 0; i < n; i++) {
        temp[(i + k) % n] = arr[i];
    }
    arr = temp;
}
    int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k;
    cin>>k;   //position to rotate
    rotateRight(arr,k);
    
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}