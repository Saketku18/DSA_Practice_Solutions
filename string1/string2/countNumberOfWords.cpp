//Remove Duplicate From string
#include<bits/stdc++.h>
using namespace std;
void countWords(string& s){
    int count=0;
    for(char ch:s){
        if(ch==' ')
        count++;  
    }
    cout<<count+1;
}
int main(){
    string s;
    getline(cin,s);
    countWords(s);
}