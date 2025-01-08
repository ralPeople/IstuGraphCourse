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
    vector<int>p(n+1, -1);
    t.insert({d[S], S});
    while(t.size()) {          
        auto [_, x] = *t.begin();    
        t.erase(t.begin());          
        for(auto&[y,w]:e[x]) {       
            if(d[y] > d[x] + w) {    
                t.erase({d[y], y});  
                d[y] = d[x] + w;     
                p[y] = x;
                t.insert({d[y], y}); 
            }
        }
    }
    int T = n;
    vector<int>path;
    int x = T;
    while(x != -1) {
        path.push_back(x);
        x = p[x];
    } 
    reverse(path.begin(), path.end());
}
