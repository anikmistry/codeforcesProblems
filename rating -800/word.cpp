#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int cu = 0;
    int cl = 0;
    for(int i =0; i<s.length(); i++){
        if(s[i]<97){
            cu += 1;
        }else{
            cl += 1;
        }
    }
    if(cu>cl){
        for(int i = 0; i<s.length(); i++){
            s[i] = toupper(s[i]);
        }
    }else{
        for(int i = 0; i<s.length(); i++){
            s[i] = tolower(s[i]);
        }
    }
    cout<<s<<endl;
}