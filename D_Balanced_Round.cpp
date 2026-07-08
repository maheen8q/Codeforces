#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n, k;
        cin>>n>>k;

        vector<long long> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        sort(v.begin(), v.end());

        long long counter=1, max_len=1;
        for(int i=1; i<n; i++){
            if(v[i]-v[i-1]<=k){
                counter++;
            }
            else{
                counter=1;
            }
            max_len=max(max_len, counter);
        }
        cout<<(n-max_len)<<endl;
    }
    return 0;
}
