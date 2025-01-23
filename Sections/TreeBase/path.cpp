vector<int>path;
void dfs(int x, int p) {
    path.push_back(x);
    for(auto& y : e[x]) {
        if(y == p) continue;
        dfs(y, x);
    }
    path.pop_back();
}
