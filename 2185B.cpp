#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    int m[n];
    string s[n];
    for(int i=0; i<n; i++){
        cin>>m[i];
        cin>>s[i];
    }
    int sum[n];
    for(int i=0; i<n; i++){
        string c[m[i]];
        for(int j=0; j<m[i]; j++){
            s[i][j]=c[i][j];
        }
        for(int j=1; j<m[i]; j++){
            if(c[i][0]<c[i][j]){
            int temp=c[i][0];
            c[0]=c[i][j];
            }
        }
        for(int j=1; j<m[i]; j++){
            sum[i]=c[i][0]*c[i][0];
        }
        

    } 
    for(int i=0; i<n; i++){
        cout<<sum[i]<<endl;
    }   

}