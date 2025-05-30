#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,a,b,c;
    cin>>t;

    
    while(t--){
        cin>>a>>b>>c;
        int mx = max({a,b,c});
        int mn = min({a,b,c});
        if(a==b && a ==c){
            cout<<"YES"<<endl;
        }
        else if(a==b || a ==c || b==c){
            if((mx==a && mx ==b || mx == a && mx ==c || mx == b && mx == c)&& mx/mn>=3){
                cout<<"NO"<<endl;
            }
            else if(mx-(mn*3)<=mn && mx%mn == 0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }

        }else{
            if((a+b+c)/mn<=6 && a%mn == 0&& b%mn == 0&& c%mn == 0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
    }
    
    
}