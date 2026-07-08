#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
     int n=0;
    if(a>b){
        cout<<0;
        return 0;
    }
   

    while(a<=b){
        a=a*3;
        b=b*2;
        n=n+1;
    }
    cout<<n;
    return 0;
}