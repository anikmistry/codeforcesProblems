#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int a=0;
    for(int i =0;i<n; i++){
        cin>>arr[i];
        if(arr[i]==1){
            a++;
            break;
        }
    }
    if(a==1){
        cout<<"HARD"<<endl;
    }else{
        cout<<"EASY"<<endl;
    }
}