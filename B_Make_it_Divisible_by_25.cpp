#include<bits/stdc++.h>
using namespace std;
int min_op(string n, string pos_value){
    int op=0;
    int checker=pos_value.size()-1;

    for(int i=n.size()-1; i>=0; i--){
        if(n[i]==pos_value[checker]){
            checker--;
            if(checker<0){
                break;
            }
        }
        else{
            op++;
        }
    }
    if(checker>=0){
        op=INT_MAX;
    }
    return op;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        string n;
        cin>>n;
        int ans=INT_MAX;
        vector <string> pos_value={"00", "25", "75", "50"};
        for(auto pv: pos_value){
            ans=min(ans, min_op(n, pv));
        }
        cout<<ans<<endl;
    }
}