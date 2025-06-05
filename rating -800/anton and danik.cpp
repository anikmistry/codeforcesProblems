#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    int count = 0;
    int count2= 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='A'){
            count++;
        }else{
            count2++;
        }
    }
    if(count>count2){
        cout<<"Anton"<<endl;
    }else if(count2>count){
        cout<<"Danik"<<endl;
    }else{
        cout<<"Friendship"<<endl;
    }
}