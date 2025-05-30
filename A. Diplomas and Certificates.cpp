#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n,k;
    cin>>n>>k;
    long long allst = n/2;
    
    long long winner = allst/(k+1);
    long long dip = winner*k;
    long long other = n-(winner+dip);
    cout<<winner<<" "<<dip<<" "<<other<<endl;
}