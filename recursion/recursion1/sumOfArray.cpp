#include<bits/stdc++.h>
using namespace std;
int sumOfArray(int n){
    if(n==0)                  //sum of digit
    return 1;
    return n%10+sumOfArray(n/10);
}
int main(){
    int n;
    cin>>n;
    cout<<sumOfArray(n);
}