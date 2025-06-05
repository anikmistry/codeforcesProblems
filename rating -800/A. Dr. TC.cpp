#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        int count=0;
        cin>>s;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                s[i]='1';
                for(int j=0; j<s.size(); j++){
                    if(s[j]=='1'){
                        count++;
                    }
                }
                s[i]='0';
            }
            if(s[i]=='1'){
                s[i]='0';
                for(int j=0; j<s.size(); j++){
                    if(s[j]=='1'){
                        count++;
                    }
                }
                s[i]='1';
            }
        }
        cout<<count<<endl;
    }
}