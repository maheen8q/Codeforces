#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,q;
        cin>>n>>q;
        vector <long long> vec(n);
        for(int i=0; i<n; i++)
            cin >> vec[i];
        
        long long old_sum=0;
        for(int i=0; i<n; i++){
            old_sum+=vec[i];
        }
        
        vector <long long> prefix_sum(n+1, 0);
        for(int i=1; i<=n; i++)
            prefix_sum[i] = prefix_sum[i-1] + vec[i-1];
        
            while(q--){
                int l,r,k;
                cin>>l>>r>>k;
                long long sum_to_remove = prefix_sum[r] - prefix_sum[l-1];
                long long sum_to_add = k*(r-l+1);
                long long new_sum = old_sum - sum_to_remove + sum_to_add;
                if(new_sum%2==1){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }

    }    
}