#include <bits/stdc++.h>
using namespace std;

int main() {
    int h1,m1,h2,m2;
    char colon;
    cin>>h1>>colon>>m1;
    cin>>h2>>colon>>m2;
    if(colon =":" &&0 <= h1 && h2<= 23 && 0<= m1 && m2 <= 59){
        int h = (h1*60) + m1;
        int h3 = (h2*60) + m2;
        int result = (h+h3)/2;
        int rh = result/60;
        int rm = result%60;
        cout << setfill('0') << setw(2) << rh << ":"
         << setfill('0') << setw(2) << rm << endl;
        return 0;
    }
    
}