#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int a[n];
        int count =1,bal =0;
        a[0]=arr[0];
        for(int i =0; i<n; i++){
            cin>>arr[i];
        }
        for(int i=1; i<n;i++){
            if(arr[bal]+1<arr[i]){
                count++;
                bal=i;

            }
        }
        cout<<count<<endl;
    }
}