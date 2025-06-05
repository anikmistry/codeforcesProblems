#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int steps=0;
    for(int i=5; i>2; i--){
        steps += n/i;
        n = n%i; 
    }
    if(n!=0){
        steps+=1;
    }
    
    cout<<steps<<endl;
}