#include<iostream>
#include<vector>
#include <stdio.h>
#include <string.h>

using namespace std;
vector<int> G[100001], W[100001];
long long dfs(int n, int p, long long w)
{
    long long ret = w;
    for (int i = 0; i < G[n].size(); i++) if (G[n][i] != p) {
        ret = max(ret, dfs(G[n][i], n, w + W[n][i]));
    }
    return ret;
}
int main()
{
    //    freopen("/Users/CoderJeny/Downloads/IX/Iin.txt", "r", stdin);
    //    freopen("/Users/CoderJeny/Desktop/out.txt", "w", stdout);
    int n;
    while(cin>>n) {
        memset(G, 0, sizeof(G));
        memset(W, 0, sizeof(W));
        long long ans = 0;
        for (int i = 1; i < n; i++) {
            int x, y, w;
            cin>>x>>y>>w;
            G[x].push_back(y); W[x].push_back(w);
            G[y].push_back(x); W[y].push_back(w);
            ans += 2*w;
        }
        cout<<ans - dfs(1, 0, 0)<<endl;
    }
    return 0;
}
