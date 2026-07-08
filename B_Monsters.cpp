#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vpll vector<pair<ll, ll>>
#define pll pair<ll, ll>
#define vll vector<ll>
signed main(){
    int t;
    cin>>t;
    while(t--){
        ll n, k;
        cin>>n>>k;
        vpll v(n);
        for(int i=0; i<n; i++){
            ll m;
            cin>>m;
            v[i]={m, i+1};
        }
        for(int i=0; i<n; i++){
            v[i].first=v[i].first%k;
            if(v[i].first==0) v[i].first=k;
        }
        sort(v.begin(), v.end(), [&] (pll a, pll b){
            if(a.first!=b.first) return a.first>b.first;
            return a.second<b.second;
        });
        for(auto it:v){
            cout<<it.second<<" ";
        }
        cout<<endl;
    }
}