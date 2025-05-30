#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string p;
        string s;
        cin>>p;
        cin>>s;
        int count=0;
        int fuck = 0;
        
        if(p.size()==s.size()){
            for(int i=0; i<s.size();i++){
                if(p[i]==s[i]){
                    count++;

                }
                
            }
            if(count==p.size()){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
        }
        if(p.size()<s.size()){
            if(p.size()==1 && s.size()==2){
            if(p[0]==s[0] && p[0]==s[1] ){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            for(int i=0; i<p.size();i++){
                if(p[i]==s[i+fuck] && p[i]==s[i+1+fuck]){
                    count++;
                    fuck++;
                }else if(p[i]==s[i+fuck]){
                    count++;
                }
             }
             if(count==p.size()){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
            
        }
        
        
        
    }
}