#include<bits/stdc++.h>
using namespace std;
int main(){
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long ones=0, zeros=0;
        vector<long long> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i]==1) ones++;
            if(a[i]==0) zeros++;
        }
        long long ways=(ones*pow(2, zeros));
        cout<<ways<<endl;
    }
}