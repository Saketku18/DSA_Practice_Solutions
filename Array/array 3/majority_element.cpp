#include<bits/stdc++.h>
using namespace std;
    int majorityElement(vector<int>& nums,int n) {
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto& x:mp){
            if(x.second>n/2)
            return x.first;
        }
        return 1;
    }
    int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<majorityElement(arr,n);
    return 0;
}