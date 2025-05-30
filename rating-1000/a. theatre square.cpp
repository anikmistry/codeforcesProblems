#include<bits/stdc++.h>
using namespace std;
int main(){
    long long m,n,a;
    cin>>m>>n>>a;
    long long x,y;
    if(m%a!=0){
        x = m/a;
        m=(a*x)+a;
    }
    if(n%a!=0){
        y=n/a;
        n=(a*y)+a;
    }
    cout<<(m*n)/(a*a)<<endl;

    
    

}