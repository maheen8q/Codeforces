#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        vll prefix(n+1, 0);
        for(int i=0; i<n; i++){
            prefix[i+1]=prefix[i]+(s[i]=='W');
        }
        ll mini=INT_MAX;
        for(int i=0; i<=(n-k); i++){
            ll diff=prefix[i+k]-prefix[i];
            mini=min(mini, diff);
        }
        cout<<mini<<endl;
    }
}