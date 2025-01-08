struct Edge{
    int y;
    long long w;
};
vector<vector<Edge>>e;

...

int main() {
    ...
    e = vector<vector<Edge>>(n+1);
    for(int i = 1; i <= m; i++) {
        long long x,y,w;
        cin >> x >> y >> w;
        e[x].pb({y,w});
        e[y].pb({x,w});
    }
    ...
}
