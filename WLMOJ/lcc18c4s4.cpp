#include<bits/stdc++.h>
using namespace std;
#define U unsigned
#define S signed
struct Edge {
	U r,t, cost;
};
vector<U> par;
vector<U> rnk;
U getPar(U i) {
	if(i==par[i])
		return i;
	return par[i]= getPar(par[i]);
}
void merge(U i,U j) {
  i= getPar(i);
  j= getPar(j);
  if(rnk[i] < rnk[j]) 
            par[i] = j; 
        else // If rnk[x] <= rnk[y] 
            par[j] = i; 
  
        if (rnk[i] == rnk[j]) 
            rnk[j]++;
}
S main() {
	U n,m; cin >> n >> m;
	vector<Edge> edges;
	edges.reserve(m);
 	for(U i=0;i<m;++i) {
 		U a,b,l; cin >> a >> b >> l; --a; --b;
 		edges.push_back({a,b,l});
	}
  	sort(edges.begin(),edges.end(),[](Edge a,Edge b){
		return a.cost < b.cost;
	});
	par.resize(n);
  for(U i=0;i<n;++i)
    par[i]= i;
  rnk.resize(n);
	U ma= 0;
	for(const Edge edge:edges) {
    merge(edge.r,edge.t);
    		ma= max(ma,edge.cost);
        	if(getPar(0)==getPar(n-1))
			goto endgame;
    	}
	cout << "-1" << endl;
	exit(0);
endgame:
	cout << ma << endl;
}s