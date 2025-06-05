#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,n,w;
    cin>>k>>n>>w;
    int kolardam = 0;
    for(int i=1; i<=w; i++){
        kolardam += k*i;
    }
    if(kolardam>n){
        cout<<kolardam-n<<endl;
    }
    else{
        cout<<0<<endl;
    }
}