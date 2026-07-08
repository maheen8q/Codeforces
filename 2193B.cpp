#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n[t];
    int a[t][100];
    for(int i=0; i<t; i++){
        cin>>n[i];
        for(int j=0; j<n[i]; j++){
            cin>>a[i][j];
        }
    }
    for(int i=0; i<t; i++){
        bool exist= false;
        for(int j=0; j<n[i]; j++){
            int temp=a[i][j];
            if(a[i][++j]==temp-1){
                exist=true;
            }
            else{
                exist=false;
                break;
            }
        }
        if(exist==false){
            return 0;
        }
    }
}