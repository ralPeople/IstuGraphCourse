#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<vector<int>>e;
vector<int>color;
void dfs(int x) {
    if(color[x]) return;
    color[x] = 1;
    for(auto& y : e[x]) {
        dfs(y);
    }
}
int main() {
    cin >> n >> m;
    e = vector<vector<int>>(n+1);
    for(int i = 1; i <= m; i++) {
        int x,y;
        cin >> x >> y;
        e[x].push_back(y);
        e[y].push_back(x);
    }
    if(m != n - 1) {
        cout << "Not a tree\n";
        return 0;
    }
    color = vector<int>(n+1);
    dfs(1);
    for(int i = 1; i <= n; i++) {
        if(color[i] == 0) {
            cout << "Not a tree\n";
            return 0;
        }
    }
}
