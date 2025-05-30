#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,p1,p2,p3,t1,t2;
    cin>>n>>p1>>p2>>p3>>t1>>t2;
    int a=0;
    int power = 0;

    for(int i =0; i<n; i++){
        int l,r;
        cin>>l>>r;
        power += (r-l)*p1;
        if(a>0){
            int t = l-a;
            if(t>t1+t2){
                power += p3*(t-(t1+t2))+ (p2*t2)+ (p1*t1);
            }
            if(t>t1 && t<=(t1+t2)){
                power+= p2*(t-t1)+ p1*t1;
            }
            if(t<=t1){
                power+= p1*t;
            }
        }
        a=r;

        
    }
    cout<<power<<endl;
}