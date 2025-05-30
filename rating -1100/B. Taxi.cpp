#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
   
    int arr2[n];
    int sum =0;
    for(int i=0; i<4; i++){
        arr2[i]=0;
    }
    for(int i=0; i<n; i++){
        int arr;
        cin>>arr;
        if(arr==4){
            arr2[0]++;
        }
        if(arr==3){
            arr2[1]++;
        }
        if(arr==2){
            arr2[2]++;
        }
        if(arr==1){
            arr2[3]++;
        }
    }
    // for(int i =0 ; i<4; i++){
    //     cout<<arr2[i]<<" "<<endl;
    // }
    sum += arr2[0];
    sum += arr2[1];
    arr2[3] = arr2[3]-arr2[1];
    
    sum+= arr2[2]/2;

    int bal = (arr2[2]%2)*2;
    if(arr2[3]>0){
        if((bal+arr2[3])%4!=0){
            
            sum+= ((bal+arr2[3])/4)+1;
            
            
            
            
        }else{
            sum+= (bal+arr2[3])/4;
        
        }
    }else{
        if(bal!=0){
            sum++;
        }
    }
    cout<<sum<<endl;
}