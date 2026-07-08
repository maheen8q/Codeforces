#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int t[n];
    int a[n][100];
    for(int i=0; i<n; i++){
        cin>>t[i];
        for(int j=0; j<t[i]; j++){
            cin>>a[i][j];
        }
    }
    
    for(int i=0; i<n; i++){
        bool exists=0;
        for(int j=0; j<t[i]; j++){
            if(a[i][j]==67){
                exists=1;
                break;
            }
            
        }
        if(exists==1){
            cout<<"YES"<<endl;
        }
        else{
             cout<<"NO"<<endl;
        }
    }
}