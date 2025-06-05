#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    cin>>a;
    cin>>b;
    for(auto& x : a){
        x = tolower(x);
    }
    for(auto& x : b){
        x = tolower(x);
    }
    
    if(a==b){
        cout<<"0"<<endl;
    }
    else if(a>b){
        cout<<"1"<<endl;
    }else{
        cout<<"-1"<<endl;
    }
}