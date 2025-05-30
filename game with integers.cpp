#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,a,b;
    cin>>t;
    while (t--)
    {
        /* code */
        cin>>n;
        for(int i = 0; i<11; i++){
            a = n+1;
            b = n-1;
            if(i<10 && a%3==0 || b%3 == 0){
                cout<<"First"<<endl;
                break;
            }
            if(i==10){
                cout<<"Second"<<endl;
            }
        }
    }
    
}