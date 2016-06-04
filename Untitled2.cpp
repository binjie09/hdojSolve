#include <stdio.h>
#include <iostream>
#include <cstring>
using namespace std;
int mp[100][100];
int vis[100][100];
int cnt, pos;
int T, m, n;

void dfs(int i, int j, int pos){
	if (i<0 || j < 0 || i >= m || j >= n) return;
	if (vis[i][j] || mp[i][j] == 0){
		return;
	}
	vis[i][j] = pos;
	dfs(i + 1, j, pos);
	dfs(i - 1, j, pos);
	dfs(i, j + 1, pos);
	dfs(i, j - 1, pos);
}

int main(){
	cin >> T;
	while (T--){
		pos = 1;
		cin >> m >> n;
		memset(vis, 0, sizeof(vis));
		for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			cin >> mp[i][j];

		for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
		if (!vis[i][j] && mp[i][j]) dfs(i, j, pos++);
		cout << pos-1 << endl;
	}
}
