#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>
#define vpll vector<pair<ll, ll>>
int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b;
        cin>>a;
        cin>>b;
        ll n=a.size();
        ll m=b.size();
        ll max_len=0;
        for(int i=0; i<n; i++){
            for(int j=1; j+i<=n; j++){
               string sub=a.substr(i,j);
                if(b.find(sub)!=string::npos){
                     max_len=max(max_len, (ll)sub.size());
                }
            }
        }
        cout<<n+m-(2*max_len)<<endl;

    }
}