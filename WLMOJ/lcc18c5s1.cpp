#include<bits/stdc++.h>
using namespace std;
#define S signed
#define U unsigned
S main() {
	U n; cin >> n;
	string a; cin >> a;
	set<char> chars{{'q','w','e','r','t','a','s','d','f','g','z','x','c','v','b'}};
	U ma= 0, cur= 0;
	for(U i=0;i<a.size();++i) {
		//cout << cur << endl;
		if(chars.count(a[i]+32))
			++cur;
		else
			cur= 0;
		ma= max(ma,cur);
	}
	cout << ma << endl;
}