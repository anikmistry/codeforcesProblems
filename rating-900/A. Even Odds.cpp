#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,k;
    cin>>n>>k;
    int count =0;
    int ct =0;
    long long bal;
    if(k==1){
        cout<<1<<endl;
    }else{
        if(n%2==0){
            bal = n/2;
            
        }else{
            bal  = (n/2)+1;
        }

        if(bal>=k){
            cout<<(k*2)-1<<endl;
        }else{
            cout<<(k-bal)*2<<endl;
        }
    }
    
}