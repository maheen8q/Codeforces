#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long> vec(n);
        for(int i=0; i<n; i++){
            cin>>vec[i];
        }
        long long answer= vec[n-1]-vec[0];

        for(int i=0; i<n; i++){
            answer = max(answer, (vec[i]-vec[0]));
        }
        for(int i=0; i<n-1; i++){
            answer = max(answer, (vec[n-1]-vec[i]));
        }
        for(int i=0; i<n-1; i++){
            answer = max(answer,  (vec[i]-vec[i+1]));
        }
        cout<<answer<<endl;
    }
}