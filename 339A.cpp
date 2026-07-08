#include<iostream>
using namespace std;

int main(){
string s;
cin>>s;
int l=s.length();

if(l>100){
    return -1;
}
for(int i=0; i<l; i=i+2){
    for(int j=i+2; j<l; j=j+2){
        if(s[i]>s[j]){
            int temp=s[i];
            s[i]=s[j];
            s[j]=temp;
        }
    }
}

cout<<s;
}