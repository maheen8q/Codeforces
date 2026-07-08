#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
    long long n,x;
    cin>>n>>x;
    vector <long long> a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<pair<long long,long long>> s(n);
    for(int i=0; i<n; i++){
        s[i].first=a[i]-x;
        s[i].second=a[i]+x;
    }
    long long ans=0;
    long long l=s[0].first;
    long long r=s[0].second;

    for(int i=1; i<n; i++){
         l=max(l,s[i].first);
         r=min(r,s[i].second);

        if(l>r){
            ans++;
            l=s[i].first;
            r=s[i].second;
        }
     }
        cout<<ans<<endl;
    }
    
}