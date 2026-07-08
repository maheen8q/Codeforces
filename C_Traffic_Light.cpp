#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        char c;
        cin>>c;
        string s;
        cin>>s;
        s+=s;
        n*=2;

        ll gi=-1;
        ll sec=INT_MIN;
        for(int i=n-1; i>=0; i--){
            if(s[i]=='g'){
                gi=i;
            }
            ll dist=gi-i;
            if(s[i]==c){
                sec=max(sec, dist);
            }
        }
        cout<<sec<<endl;
    }
}