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
        string a;
        cin>>a;
        vll pref(n+1, 0);
        vll suff(n+1, 0);
        unordered_set<ll> s;

        for(int i=1; i<=n; i++){
            s.insert(a[i-1]);
            pref[i]=s.size();
        }
        s.clear();
        for(int i=n; i>=1; i--){
            s.insert(a[i-1]);
            suff[i]=s.size();
        }
        ll ans=0;
        for(int i=0; i<n; i++){
            ans=max(ans, pref[i]+suff[i+1]);
        }
        cout<<ans<<endl;

    }
}