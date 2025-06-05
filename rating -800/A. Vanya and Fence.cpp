#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,h;
    cin>>n>>h;
    int r=0;
    for(int i=0; i<n;i++){
        int a;
        cin>>a;
        if(a>h){
            r+=2;
        }else{
            r++;
        }
    }
    cout<<r<<endl;
}