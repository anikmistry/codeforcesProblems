#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int count=0;
        for(int i =0; i<s.size()/2; i++){
            if(s[i]=='('){
                count++;
            }


        }
        if(count==s.size()/2 && s.size()%2==0){
            cout<<"No"<<endl;
        }else{
            cout<<"YES"<<endl;
        }
    }
}