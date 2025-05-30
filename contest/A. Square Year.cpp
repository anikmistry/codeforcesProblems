#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while (t--)
  {
    int c;
    cin>>c;
   int x= sqrt(c);
   int a = (x+10)/2;


   int b= x-a;

   
   if((a+b)*(a+b)==c  && b>=0 && a>=0){
    cout<<a<<" "<<b<<endl;
   }
   else if((a+b)*(a+b)==c && (a>=0 || b>=0)){
    if(a>b){
      cout<<(a+b)<<" "<<0<<endl;
    }else{
      cout<<(b+a)<<" "<<0<<endl;
    }


   }
   else{
    cout<<-1<<endl;
   }
  }



}