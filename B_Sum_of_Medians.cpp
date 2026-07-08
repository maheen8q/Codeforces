#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long long> a(n*k);
        long long sum=0;
        for(int i=0; i<(n*k); i++) cin>>a[i];
        long long point=n*k;
        while(k--){
            point-=(n/2 + 1);
            sum+=a[point];
        }
        cout<< sum <<endl;
    }
}