#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;

    cin>>n >>k;
    int b;
    int count = 0;
    for(int i = 1; i<=n; i++){
        int a;
        cin>>a;
        if(a>0 && i<=k){
            count++;
        }
        if(b==a && b>0){
            count++;
        }
        if(i==k){
            b = a;
        }
        
        
        
    }
    cout<<count<<endl;

}