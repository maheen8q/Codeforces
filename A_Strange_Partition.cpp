#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,x;
        cin>>n>>x;
        long long min=0, max=0;
        vector <long long> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
            max+=ceil((a[i]*1.0)/x);
            min+=a[i];
        }
        min=ceil((min*1.0)/x);

        cout<<min<<" "<<max<<endl;
    }
}