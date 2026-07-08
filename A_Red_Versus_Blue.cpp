#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define vll vector<long long>
#define vpll vector<pair<ll, ll>>
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n, r, b;
        cin>>n>>r>>b;
        string s;
        ll lr=r/(b+1);
        ll er=r%(b+1);

        for(int i=1; i<=b+1; i++){
            for(int j=0; j<lr; j++) s+='R';
            if(er>0){ 
                s+='R';
                er--;}
            if(i!=b+1) s+='B';
        }
        cout<<s<<endl;
    }
}