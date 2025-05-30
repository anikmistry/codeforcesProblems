#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int count = 1;
    for(int i = 0; i<s.size();i++){
        if(s[i]==s[i+1]){
            count++;;
        }else{
            count=1;
        }
        if(count==7){
            break;
        }
        
    }
    if(count>=7){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
}