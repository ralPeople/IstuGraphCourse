#include <bits/stdc++.h>
using namespace std;
struct Edge{
    int y;
    long long w;
};
const long long INF = 1'000'000'000'000'000'000;
vector<vector<Edge>>e;
int n,m;

void dij() {
    vector<long long>d(n+1,INF);
    int S = 1;
    priority_queue<pair<long long, int>>qu;
    qu.push({-d[S], S});
    while(qu.size()) {             
        auto [cur_dist, x] = qu.top();    
        qu.pop();                     
        cur_dist = -cur_dist;         
        if(d[x] < cur_dist) continue; 
        for(auto&[y,w]:e[x]) {       
            if(d[y] > d[x] + w) {     
                d[y] = d[x] + w;      
                qu.push({-d[y], y});  
            }
        }
    }
}
