#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count = 0;
    int total =0;

    int total2 = 0;
    vector<int>a(n);
    for(int i=0; i<n;i++){
        cin>>a[i];
        total+=a[i];
    }
    sort(a.rbegin(),a.rend());
    for(int i = 0; i<n;i++){
        total2+=a[i];
        count++;
        if(total2>total/2){
            break;
        }
    }
    cout<<count<<endl;


}