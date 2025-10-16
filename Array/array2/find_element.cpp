#include<bits/stdc++.h>
using namespace std;
int find(vector<int>& arr,int key){
    int n=arr.size();
    for(int i=0;i<n;i++){ //linear search
        if(arr[i]==key)
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
    int key;
    cin>>key;
    cout<<find(arr,key);
    return 0;
}