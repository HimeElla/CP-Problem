#include <bits/stdc++.h>
using namespace std;
int main(){
    int a, sum = 0, cross = 0;
    
    while(cin>>a){
        if(a<10)
            sum = cross = a;
        else if(a < 100){
            sum = a/10 + a%10;
            cross = a/10 * a%10;
        }
        else{
            sum = (a/100) + ((a%100)/10) + ((a%100)%10);
            cross = (a/100) * ((a%100)/10) * ((a%100)%10);
        }
        if(sum == cross)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    
    return 0;
}
