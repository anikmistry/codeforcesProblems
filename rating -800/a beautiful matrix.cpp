#include<bits/stdc++.h>
using namespace std;
int main(){
    const int size = 5;
    int arry[size][size];
    for(int i = 0; i<size;++i){
        for(int j= 0; j<size; ++j){
            //cout << "Element [" << i << "][" << j << "]: ";
            cin>>arry[i][j];
        }
    }
    for(int i = 0; i<5;i++){
        for(int j = 0; j<5; j++){
            if(arry[i][j]==1){
                int a = abs(2-i);
                int b = abs(2-j);
                int r = a +b;
                cout<<r<<endl;
            }
            
        }
    }
}



