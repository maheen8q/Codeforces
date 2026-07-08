#include<bits/stdc++.h>
using namespace std;
int main(){
        long long n,d;
        cin>>n>>d;
        int a[n];
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        long long left=-1;
        long long right=n-1;
        long long teams=0;
        long long teamsize=1;

        while(left<right){
            if((a[right]*teamsize)<=d&&left<right){
                left++;
                teamsize++;
            }
            else{
                teams++;
                right--;
                teamsize=1;
            }
        }
     cout<<teams<<endl;
    
}