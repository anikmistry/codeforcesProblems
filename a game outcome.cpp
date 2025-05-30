#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    int b[n];
    int c[n];
    int count =0;
    for(int i =0; i<n; i++){
        int rsum = 0;
        for(int j=0; j<n; j++){
            cin>>a[i][j];
            rsum+=a[i][j];

        }
        b[i]=rsum;
    }
    for(int i = 0; i<n;i++){
        int csum = 0;
        for(int j=0; j<n;j++){
            csum+=a[j][i];

        }
        c[i]=csum;
    }
    for(int i =0;i<n;i++){
        for(int j=0;j<n;j++){
            if(c[i]>b[j]){
                count++;
            }
        }
    }
    cout<<count<<endl;
}