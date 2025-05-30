#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int s=0;
    int arr[n];
    for(int i=0; i<n;i++){
        int a,b;
        cin>>a>>b;
        s=s+(b-a);
        arr[i]=s;
        
    }
    sort(arr,arr+n);
    cout<<arr[n-1]<<endl;
}