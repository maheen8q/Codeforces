#include<bits/stdc++.h>
#define ll long long 
#define vpll vector<pair<ll, ll>>
#define vll vector<ll>
using namespace std;
int main(){
    int t;
    cin>> t;
    while(t--){
        ll n,p;
        cin>>n>>p;
        vpll v(n);
        vll a(n), b(n);
        for(int i=0; i<n; i++) cin>>a[i];
        for(int i=0; i<n; i++) cin>>b[i];
        for(int i=0; i<n; i++) v[i]={b[i], a[i]};

        sort(v.begin(), v.end());
        ll min_cost=p;
        ll alr_shared=1;
   
        for(auto it:v){
            ll pot_shared=it.second;
            ll its_cost=it.first;

            if(its_cost>=p) break;
            if(pot_shared+alr_shared>n){
                min_cost+=(n-alr_shared)*its_cost;
                alr_shared=n;
                break;
            }
            else{
                min_cost+=pot_shared*its_cost;
                alr_shared+=pot_shared;
            }
        }
        min_cost+=(n-alr_shared)*p;
        cout<<min_cost<<endl;
    }
}