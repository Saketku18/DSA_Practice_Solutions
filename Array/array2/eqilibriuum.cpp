#include<bits/stdc++.h>
using namespace std;
int index(vector<int>& arr,int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int lsum=0;
    int rsum=0;
    for(int i=0;i<n-1;i++){
        if(i>0)
        lsum+=arr[i-1];
        else
        lsum=0;
        rsum=sum-lsum-arr[i];
        if(lsum==rsum)
        return i;
    }
    return -1;

}
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ind=index(arr,n);
    cout<<ind;

}