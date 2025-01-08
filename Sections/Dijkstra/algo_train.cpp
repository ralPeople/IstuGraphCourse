struct Edge{
    int y;
    long long t;
    long long w;
};
...
for(auto&[y, t, w]:e[x]) {
    if(d[x] <= t && d[y] > t + w) {
        ...
    }
}
