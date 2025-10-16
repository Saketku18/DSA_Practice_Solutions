#include<bits/stdc++.h>
using namespace std;
int maxSubArray(vector<int>& nums,int n) {
        if (nums.empty()) {
            return 0;
        }
        int maxsum=INT_MIN;
        int psum=0;
        for(int i=0;i<n;i++){
            psum=psum+nums[i];
            maxsum=max(psum,maxsum);
            if(psum<0){
                psum=0;
            }  
        }
        return maxsum;
    }
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxSubArray(arr,n);
    return 0;
}