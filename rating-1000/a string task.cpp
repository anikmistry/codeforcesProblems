#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,r;
    cin>>s;
    for(char &c : s){
        c = tolower(c);
    }
    string vs="aeiouy";
    for(int i =0; i<s.length();i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y'){
            r+=".";
            r+=s[i];
        }
    }

    cout<<r<<endl;
}