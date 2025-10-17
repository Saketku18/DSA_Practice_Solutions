#include<bits/stdc++.h>
using namespace std;
int countdigit(int n){   //count number of digit
    if(n==0)                 
    return 0;    
    return 1+countdigit(n/10);   //for each call divide number by 10
}
int main(){
    int n;
    cin>>n;
    cout<<countdigit(n);
}