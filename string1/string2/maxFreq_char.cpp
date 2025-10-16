// count frequency of each character
#include<bits/stdc++.h>
using namespace std;
void maxFreq(string& s){
     vector<int> freq(26,0);
    for(char ch:s){
        freq[ch-'a']++;
    }
    int maxi=0;
    for(int i=1;i<26;i++){
        if(freq[i]>freq[maxi]){
            maxi=i;
        }
    }
    char ch='a'+maxi;
    cout<<ch << freq[maxi];

}
int main(){
    string s;
    cin>>s;
    maxFreq(s);
}