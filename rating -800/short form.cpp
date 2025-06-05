#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string str;
    for(int i = 0; i<s.length(); i++){
        str.push_back(s[0]);
        if(s[i]=' '){
            str.push_back(s[i+1]);
        }
    }
    cout<<str<<endl;
}