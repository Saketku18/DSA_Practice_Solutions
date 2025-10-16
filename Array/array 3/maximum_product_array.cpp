#include<bits/stdc++.h>
using namespace std;
int maxProduct(vector<int>& nums,int n) {
       int mini=nums[0];
       int maxi=nums[0];
       int result=maxi;
        for(int i=1;i<nums.size();i++){
            int temp=mini;
           mini=min(nums[i],min(nums[i]*mini,nums[i]*maxi));
           maxi=max(nums[i],max(nums[i]*temp,nums[i]*maxi));
           result=max(result,maxi);
        }
        return result;
    }
        
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxProduct(arr,n);
    return 0;
}