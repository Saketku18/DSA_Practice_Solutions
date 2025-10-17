#include<bits/stdc++.h>
using namespace std;
int power(int n,int num){
    if(num==0)                  //find power
    return 1;
    return n*power(n,num-1);
}
int reverse(int n){    //reverse number
    int sum=0;
    while(n>0){
        int r=n%10;
        sum+=r;
        n/=10;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int num=reverse(n);
    cout<<power(n,num);
}