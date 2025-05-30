#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    
    while(t--){
        long long n,k,x;
        
        cin>>n>>k>>x;
        int count =0;
        for(long long i = n; i>0;i--){
            
            if(x>=i){
                x= x-i;
                count++;
            }
        }
        cout<<count<<endl;
        if(x==0 && count==k){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
    
}