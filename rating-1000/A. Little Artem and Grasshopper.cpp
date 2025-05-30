#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    string s;
    cin>>s;
    long long bal =0;
    int arr[n];
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    for(int i =0; i<n; i++){
        if(s[bal]=='>'){
            bal=bal+arr[bal];
            if(bal>=n){
                break;
            }
        }
        if(s[bal]=='<'){
            bal = bal-arr[bal];
            if(bal<0){
                break;
            }
        }
    }

    if(bal>=0 && bal<n){
        cout<<"INFINITE"<<endl;
    }else{
        cout<<"FINITE"<<endl;
    }
}