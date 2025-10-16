#include<bits/stdc++.h>
using namespace std;
int maximumfreq(vector<int>& arr,int n){
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
       mp[arr[i]]++;
    }
    priority_queue<int> pq;
    for(auto& it:mp){
        pq.push(it.second);
    }
    int a=pq.top();
     int count=pq.top();
     pq.pop();
    while(!pq.empty()&&pq.top()==a){
        count+=a;
        pq.pop();
    }
    return count; 
}
    int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"maximum freq:"<<maximumfreq(arr,n)<<endl;  
    
    return 0;
}