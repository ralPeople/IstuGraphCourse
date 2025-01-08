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
    set<pair<long long, int>>t; 
    t.insert({d[S], S});
    while(t.size()) {          
        auto [_, x] = *t.begin();    
        t.erase(t.begin());          
        for(auto&[y,w]:e[x]) {       
            if(d[y] > d[x] + w) {    
                t.erase({d[y], y});  
                d[y] = d[x] + w;     
                t.insert({d[y], y}); 
            }
        }
    }
}
