#include<bits/stdc++.h>
using namespace std;
int maximum(vector<int>& arr,int n){
    int maxi=arr[0];
    for(int i=1;i<n;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int minimum(vector<int>& arr,int n){
    int mini=arr[0];
    for(int i=1;i<n;i++){
        mini=min(mini,arr[i]);
    }
    return mini;
}
    int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"maximum:"<<maximum(arr,n)<<endl;  //maximum
    cout<<"minimum:"<<minimum(arr,n);
    
    return 0;
}