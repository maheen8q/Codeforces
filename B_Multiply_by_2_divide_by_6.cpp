#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long two=0; 
        long long three=0;

        while(n>0&&n%3==0){
            three++;
            n=n/3;
        }
        while(n>0&&n%2==0){
            two++;
            n=n/2;
        }
        if(n>1||two>three){
            cout<<-1<<endl;
        }
        else{
            cout<<(three+(three-two))<<endl;
        }

    }
}