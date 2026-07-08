#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void solve (){
    int n, q;
    cin>>n>>q;

    vector <long long> a(n+1), b(n+1), c(n+1), suffix_max(n+2, 0), pref_sum(n+1, 0);

    for(int i=1; i<=n; i++){
        cin>>a[i];
    }
    for(int i=1; i<=n; i++){
        cin>>b[i];
    }
    for(int i=1; i<=n; i++){
        c[i]=max(a[i], b[i]);
    }
    for(int i=n; i>=1; i--){
        suffix_max[i]=max(suffix_max[i+1], c[i]);
    }
    for(int i=1; i<=n; i++){
        pref_sum[i]=pref_sum[i-1]+suffix_max[i];
    }
    
    while(q--){
        int l;
        int r;
        cin>>l>>r;
        long long ans = pref_sum[r] - pref_sum[l-1];
        cout<<ans<<(q==0? "": " ");
        
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}