#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    char c;

    int a[7];
    for(int i=0; i<7; i++){
        a[i]=0;
    }
    for(int i =0; i<n; i++){
        string s;
        cin>>s;
        for(int j =0; j<7; j++){
           
            c = s[j];
            int m = c - '0';
            
            a[j]= a[j]+m;
        }
    }
    sort(a, a+7);
    cout<<a[6]<<endl;

}