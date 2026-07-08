#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,k,b,s;
        cin>>n>>k>>b>>s;

        ll minimum = k*b;
        ll maximum = k*b + (k-1)*n;

        if(s < minimum || s > maximum){
            cout << -1 << endl;
            continue;
        }

        vll a(n,0);

        a[0] = minimum;
        s -= minimum;

        for(int i=0; i<n; i++){
            ll add = min(s, k-1);
            a[i] += add;
            s -= add;
            if(s == 0) break;
        }

        for(auto x : a) cout << x << " ";
        cout << endl;
    }
}
