#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,a,b;
    int p=0;
    cin>>n>>m>>a>>b;
    double b1= b/m;
    if(b1<a){
        p += ((n/m)*b);
        if((n%m)*a<b){
            p+=(n%m)*a;
        }else{
            p+=b;
            

        }

    }else{
        p += a*n;
    }
    cout<<p<<endl;
    
}