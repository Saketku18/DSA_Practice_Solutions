#include<bits/stdc++.h>
using namespace std;
int count(string& s){
    int vowels=0,consonants=0,spaces=0;
    for(char ch:s){
        ch=tolower(ch);
    
     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            vowels++;
        else if (ch >= 'a' && ch <= 'z')
            consonants++;
        else if (ch == ' ')
            spaces++;
    }
     cout << "Vowels: " << vowels << "\n";
     cout << "Consonants: " << consonants << "\n";
     cout << "Spaces: " << spaces << "\n";
    }
int main(){
    string s;
    getline(cin,s);
    count(s);
    return 0;
}