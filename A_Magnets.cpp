#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int prev;
    cin >> prev;
    int curr;
    int group=1;
    vector <int> n(t);
    for(int i=1; i<t; i++){
        cin >> curr;

        if(curr!=prev){
        group++;
         }
          prev=curr;
    }
    cout << group << endl;
    return 0;
}