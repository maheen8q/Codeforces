#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 int c=0;
 while(n!=0){
    if(n>=5){
        n=n-5;
        c++;
    }
    else if(n>=4){
        n=n-4;
        c++;
    }
    else if(n>=3){
        n=n-3;
        c++;
    }
    else if(n>=2){
        n=n-2;
        c++;
    }
    else{
        n--;
        c++;
    }
 }
 cout<<c;
 return 0;
}