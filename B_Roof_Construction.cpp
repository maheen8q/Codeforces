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
        n--;
        ll msb=log2(n);
        vll ans;
        ll num=pow(2, msb)-1;
        while(num>=0){
            ans.push_back(num);
            num--;
        }
        num=pow(2, msb);
        while(num<=n){
            ans.push_back(num);
            num++;
        }
        for(auto x: ans){
            cout<<x<<" ";
        }
        cout<<endl;

    }
}