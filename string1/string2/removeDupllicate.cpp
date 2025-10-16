//Remove Duplicate From string
#include<bits/stdc++.h>
using namespace std;
void removeDuplicate(string& s){
    unordered_set<char> st;
    string ans;
    for(char ch:s){
        if(st.find(ch)==st.end()){
            ans+=ch;
            st.insert(ch);
        }
    }
    cout<<ans;
}
int main(){
    string s;
    cin>>s;
    removeDuplicate(s);
}