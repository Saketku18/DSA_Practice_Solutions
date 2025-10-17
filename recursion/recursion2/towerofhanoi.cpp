#include<bits/stdc++.h>
using namespace std;
int tower(char start,char end,char aux,int n){
    if(n==0)
    return 0;
    int steps=0;
    steps+=tower(start,aux,end,n-1);
    steps+=1;
    steps+=tower(aux,end,start,n-1);
    return steps;
}
int main(){
    char start,end,aux;
    int n;
    cin>>n;
    cout<<tower(start,end,aux,n);
}