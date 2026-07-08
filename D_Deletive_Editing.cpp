#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string a, b;
        cin>>a>>b;
        int n=a.size();
        int m=b.size();

        vector<int> freq_b(26, 0);
        for(int i=0; i<m ;i++){
            freq_b[b[i]-'A']++;
        }
        for(int i=n-1; i>=0; i--){
            if(freq_b[a[i]-'A']>0){
                freq_b[a[i]-'A']--;
            }
            else{
                a[i]='.';
            }
        }
        string final="";
        for(int i=0; i<n; i++){
            if(a[i]!='.'){
                final+=a[i];
            }
        }

        if(final==b){
            cout<< "YES" <<endl;
        }
        else{
            cout << "NO" <<endl;
        }
    }

}