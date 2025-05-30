#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ct=0;


    string s = to_string(n);
    for(int i =1;i<=n; i++ ){
        if(n%i==0){
            
            string s1 = to_string(i);
            for(int j =0; j<s1.length(); j++){
                if(s1[j]=='4'|| s1[j]=='7'){
                    ct++;
                }
                
                
            }
            if(s1.length()==ct){
                    ct=-1;
                    break;
                }
            ct=0;
        }

    }
    if(ct==-1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    
}