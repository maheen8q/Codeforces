#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<ll> 
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll a(n),b(n);
        for(ll i=0; i<n; i++) cin>>a[i];
        for(ll i=0; i<n; i++) cin>>b[i];
        vll sub_a(2*n+1, 0);
        vll sub_b(2*n+1, 0);
        ll counter=1;

        for(ll i=1; i<n; i++){
            if(a[i]==a[i-1]){
                counter++;
            }
            else{
                sub_a[a[i-1]]=max(sub_a[a[i-1]], counter);
                counter=1;
            }
        }
        sub_a[a[n-1]]=max(sub_a[a[n-1]], counter);
        counter=1;
        for(ll i=1; i<n; i++){
            if(b[i]==b[i-1]){
                counter++;
            }
            else{
                sub_b[b[i-1]]=max(sub_b[b[i-1]], counter);
                counter=1;
            }
        }
        sub_b[b[n-1]]=max(sub_b[b[n-1]], counter);

        ll max_freq=-1;
        for(ll i=0; i<=2*n; i++){
            max_freq=max(max_freq, sub_a[i]+sub_b[i]);
        }
        cout<<max_freq<<endl;

    }
}