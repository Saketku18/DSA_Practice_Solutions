#include<bits/stdc++.h>
using namespace std;
void runningSum(vector<int>& nums) {
    for(int i=1;i<nums.size();i++){
        nums[i]=nums[i]+nums[i-1];
    }   
}
int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    runningSum(nums);
     for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}