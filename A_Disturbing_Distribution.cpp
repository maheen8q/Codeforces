#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
	ios::sync_with_stdio(false),cin.tie(0);
	ll t, n, a, ans;
    cin>>t;
    while(t--){
        ans=0;
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>a;
            if(a>1) ans+=a;       
        }
        if(a==1) ans++;
        cout<<ans<<'\n';
    }
	return 0;
}