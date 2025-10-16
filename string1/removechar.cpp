#include<bits/stdc++.h>
using namespace std;
void remove(string& s){
    string ans;
    for(char ch: s){
        if(isalpha(ch))
        ans+=ch;
    }
    cout<<ans<<endl;
}
int main(){
    string s;
    cin>>s;
    remove(s);
    return 0;
}