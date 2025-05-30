#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int count1 =0;
        int count0 =0;
        for(int i=0; i<s.size();i++){
            if(s[i]=='1'){
                count1++;
            }else{
                count0++;
            }
        }
        int a = (n-(k*2))/2;
        int b = a+(k*2);
        if((count1==a && count0 == b) || (count1 == b && count0 == a)){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }
}