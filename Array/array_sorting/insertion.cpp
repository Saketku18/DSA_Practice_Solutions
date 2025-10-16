#include<bits/stdc++.h>
using namespace std;
void insertion(vector<int>& arr,int n){
    for(int i=1;i<n;i++){
        int min=arr[i];
        int j=i-1;
       while(j>=0 && arr[j]>min){
        arr[j+1]=arr[j];
        j--;
       }
        swap(arr[j+1],min);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertion(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}