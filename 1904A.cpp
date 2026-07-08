#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int dx[4]={1, 1, -1, -1};
        int dy[4]={1, -1, 1, -1};
        long long a, b;
        cin>>a>>b;
        long long x_queen, y_queen;
        cin>>x_queen>>y_queen;
        long long x_king, y_king;
        cin>>x_king>>y_king;

        set<pair<int, int>> king_hits, queen_hits;
        for(int i=0; i<4; i++){
                king_hits.insert({x_king + dx[i]*a, y_king + dy[i]*b});
                king_hits.insert({x_king + dx[i]*b, y_king + dy[i]*a});
                queen_hits.insert({x_queen + dx[i]*a, y_queen + dy[i]*b});
                queen_hits.insert({x_queen + b*dx[i], y_queen + a*dy[i]});
        }
        int ans=0;
        for(auto &p: king_hits){
            if(queen_hits.count(p)!=queen_hits.empty()){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}