#include<bits/stdc++.h>
using namespace std;
int main(){
    string n;
    cin>>n;
    char a,b;
    for(int i = 0; i<n.length();i++){
        if(n[i]=='.'){
            a=n[i-1];
            b=n[i+1];
        }
    }
    int e = a -'0';
    int c = a -'0';
    int d = b -'0';
  
    if(d>=5 && c!=9){
        c+=1;
        
    }
    if(e==9){
        cout<<"GOTO Vasilisa."<<endl;
    }else{
        for(int i=0; i<n.length();i++){
            if(n[i+1]=='.'){
            cout<<c<<endl;
            break;
            }
            cout<<n[i];
        }
    }
    
}