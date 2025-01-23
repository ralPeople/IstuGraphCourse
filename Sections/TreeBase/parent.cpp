void dfs(int x, int p) {
    parent[x] = p;
    for(auto& y : e[x]) {
        if(y == p) continue;
        dfs(y, x);
    }
}
