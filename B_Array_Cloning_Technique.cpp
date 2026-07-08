#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <long long> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }

        unordered_map <long long, long long> mp;

        for(int i=0; i<n; i++){
            mp[a[i]]++;
        }
        long long max_freq=0;
        for(auto i: mp){
            max_freq=max(max_freq, i.second);
        }
        long long operation=0;
        while(max_freq<n){
            operation++;
            if(max_freq*2<=n){
                operation+=max_freq;
                max_freq=max_freq*2;
            }
            else{
                operation=operation+(n-max_freq);
                max_freq=n;
            }
        }
        cout<<operation<<endl;
    }
}