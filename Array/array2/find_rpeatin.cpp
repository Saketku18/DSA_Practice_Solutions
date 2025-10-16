#include<bits/stdc++.h>
using namespace std;
int find(vector<int>& arr,int n,vector<int>& ans){
   unordered_map<int,int> mp;
   for(int i=0;i<n;i++){
    mp[arr[i]]++;
   }
   for(auto& it:mp){
    if(it.second>1){
        ans.push_back(it.first);
    }
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
    vector<int> ans;
    find(arr,n,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}