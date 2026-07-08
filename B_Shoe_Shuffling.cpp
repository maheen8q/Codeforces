#include<bits/stdc++.h>
#define ll long long
#define vll vector<ll>
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vll student(n);
        for(int i=0; i<n; i++) cin>>student[i];
        map<ll, ll> freq;
        for(int i=0; i<n; i++) freq[student[i]]++;

        bool flag=false;

        for(auto i: freq){
            if(i.second==1){
                flag=true;
                break;
            }
        }

        if(flag){
            cout<<"-1"<<endl;
            continue;
        }

        vll perm(n);

        for(int i=0; i<n; i++){
            perm[i]=i+1;
        }

        long long l=0, r=0;
        while(r<n){
            if(student[l]==student[r]){
                r++;
            }
            else{
                rotate(perm.begin()+l, perm.begin()+l+1, perm.begin()+r);
                l=r;
            }
        }
        rotate(perm.begin()+l, perm.begin()+l+1, perm.begin()+r);
        for(auto i:perm){
            cout<<i<<" ";
        }
        cout<<endl;

    }
}