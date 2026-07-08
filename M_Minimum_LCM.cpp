#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
       ll a=1;
       ll b=n-1;
       for(int i=2; i*i<=n; i++){
           if(n%i==0){
               a=n/i;
               b=n-a;
               break;}
           }
        cout<<a<<" "<<b<< endl;

    }
}