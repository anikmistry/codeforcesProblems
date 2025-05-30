#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int a =0, b= 0;
    for(int i=0;i<s.length();i++){
        if(b==5){
            a++;
            b=0;
        }
        if(s[i]==s[i+1]){
            b++;
        }
        if(s[i]!=s[i+1]){
            a++;
            b=0;
        }
    }
    
    cout<<a<<endl;
}