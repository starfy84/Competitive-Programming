#include<bits/stdc++.h>
using namespace std;
#define U unsigned
#define S signed
vector<vector<U>> adj;
vector<U> des;
U dfs(U i,U p) {
	des[i]= 1;
	for(U j=0;j<adj[i].size();++j) {
		if(adj[i][j]==p)
			continue;
		des[i]+= dfs(adj[i][j],i);
	}
	return des[i];
}
S main() {
	U n,r,m; cin >> n >> r >> m; --r;
	adj.resize(n);
	des.resize(n);
	for(U i=0;i<n-1;++i) {
		U a,b; cin >> a >> b; --a; --b;
		adj[a].push_back(b);
		adj[b].push_back(a);
	}
	dfs(r,r);
	sort(des.begin(),des.end());
	cout << des[m-1];
}