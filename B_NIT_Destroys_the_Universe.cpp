#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int vec[n];
        int count_zero=0;
        for(int i=0; i<n; i++){
            cin>>vec[i];
            if(vec[i]==0){
                count_zero++;
            }
        }
        bool found_zero=false;
        int left=0;
        int right=n-1;
        while(vec[left]==0){
            left++;
        }
        while(vec[right]==0){
            right--;
        }
        for(int i=left; i<=right; i++){
            if(vec[i]==0){
                found_zero=true;
            }
        }
        if(count_zero==n){
            cout<< 0 <<endl;
        }
        else if(found_zero==false){
            cout<< 1 <<endl;
        }
        else{
            cout<< 2 <<endl;
        }


    }
    return 0;
}