#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,t,a,b;
    cin>>s;
    cin>>t;
    reverse(t.begin(),t.end());
    

    if(s.size()!= t.size()){
        cout<<"NO"<<endl;
    }else{
        if(s==t){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}