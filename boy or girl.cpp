#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string a = "abcdefghijklmnopqrstuvwxyz";
    int count=0;
    for(int i = 0; i<a.size();i++){
        bool bal = false;
        for(int j=0; j<str.size();j++){
            if(a[i]==str[j]){
                count+=1;
                break;
                
            }
        }
        
        
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGNORE HIM!"<<endl;
    }
}