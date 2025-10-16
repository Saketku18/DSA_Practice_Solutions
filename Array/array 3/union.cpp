#include<bits/stdc++.h>
using namespace std;
void intersection(vector<int>& arr1,int n,vector<int>& arr2,int m,vector<int>& ans){
    set<int> s(arr1.begin(),arr1.end());
    for(int x:arr2){
        if(s.count(x)){
            ans.push_back(x);
            s.erase(x);
        }
    }

    }
int main(){
    int n,m;
    cin>>n>>m;
    vector<int> arr1(n);
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    vector<int> arr2(m);
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int> ans;
    intersection(arr1,n,arr2,m,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}