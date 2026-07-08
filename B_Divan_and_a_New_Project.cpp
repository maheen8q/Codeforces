#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>
#define vpll vector<pair<ll, ll>>
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        vpll bm;
        for(int i=0; i<n; i++){
            bm.push_back({a[i], i});
        }
        sort(bm.rbegin(), bm.rend());
        vll ans(n+1, 0);
        a[0]=0;
        ll m=0;
        ll c=1;
        for(int i=0; i<n; i++){
            ans[bm[i].second+1]=c;
            m+=(2*abs(c)*bm[i].first);
            if(c<0){
                c=abs(c)+1;
            }
            else{
                c=-c;
            }
        }
        cout<<m<<endl;
        for(auto &it: ans){
            cout<<it<<" ";
        }
        cout<<endl;
    }
}