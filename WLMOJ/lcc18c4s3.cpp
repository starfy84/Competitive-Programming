#include<bits/stdc++.h>
using namespace std;
#define U unsigned
#define S signed
S main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    U n,k; cin >> n >> k;
    vector<map<U,U> > flightCost(2);
    for(U i=0;i<n;++i) {
    	U d;
    	char t;
    	U c;         cin >> d >> t >> c;
    	bool direction= t=='F';
    	if(flightCost[direction].find(d) == flightCost[direction].end()) {
    		flightCost[direction][d]= c;
    	} else
    	flightCost[direction][d]=
    		min(c,flightCost[direction][d]);
    }
    U mi= ~0;
    for(pair<U,U> x:flightCost[0]) {
    	U day= x.first,
    	cost= x.second;
    	auto y= flightCost[1].find(day+k);
    	
    	if(y==flightCost[1].end())
    		continue;
    	auto yy= *y;
    	mi= min(mi,cost+yy.second);
    }
    if(mi==~0)
    	cout << -1;
    else
    	cout << mi;
}