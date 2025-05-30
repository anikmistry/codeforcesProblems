#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n,m;
    cin>>n;
    n = n;
    
    string month[12]= {"January", "February","March", "April","May", "June", "July", "August", "September", "October", "November", "December"};
    for(int i=0; i<12; i++){
        if(month[i]==s){
            m = i+1;
        }
    }
    n = n +m;
    n = n%12;
    if(n==0){
        cout<<month[11];
    }else{
        cout<<month[n-1]<<endl;
    }

    
}