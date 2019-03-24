#include<bits/stdc++.h>
using namespace std;
#define U unsigned
#define S signed
S main() {
	U d; cin >> d;
for(;d--;) {
	U n; cin >> n;
	vector<string> s(n);
	for(string& x:s)
		cin >> x;
	U m; cin >> m;
	vector<string> t(m);
	for(string& x:t) {
		cin >> x;
		bool na= true;
		for(U i=0;i<x.size();++++i) {
			if(x[i]=='n' && x[i+1]=='a')
				continue;
			na= false;
			break;
		}
		if(na)
			x= "na";
	}
	for(U i=0;i< s.size()-t.size()+1; ++i) {
		for(U j=0;j<t.size();++j) {
			if(t[j]=="na" || t[j]== s[j+i])
				continue;
			goto no;
		}
		cout << "Yes\n";
		goto yes;
no:;
	}
	cout << "No\n";
yes:;
}
}