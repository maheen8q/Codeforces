#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int h;
        cin>>h;
        vector<ll> v(h);
        for(int i=0; i<h; i++) cin>>v[i];
        ll sum=0;
        ll ans=LLONG_MAX;
        for(int i=0; i<h; i++){
            sum+=v[i];
            ans=min(ans, sum/(i+1));
            cout<<ans<<" ";
        }
        cout<<endl;
    }
}