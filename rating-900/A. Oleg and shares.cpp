#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n, k;
    cin>>n>>k;
    long long arr[n];
    long long count =0;
    for(long long i =0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    for(long long i = 1; i<n; i++){
        count = (count + (arr[i]- arr[0])/k);
        if((arr[i]-arr[0])%k!=0){
            count =-1;
            break;
        }
    }
    cout<<count<<endl;   

}