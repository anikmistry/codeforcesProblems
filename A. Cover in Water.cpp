#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        cin>>n;
        cin>>s;
        int count=0;
        for(int i=0; i<s.size();i++){
            if(s[i]=='.' && s[i-1] =='.' && s[i+1]=='.'){
                count=2;
                break;
            }else if(s[i]=='.'){
                count++;
            }

        }
        cout<<count<<endl;
    }
}