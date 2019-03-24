#include<bits/stdc++.h>
#define U unsigned
#define S signed
using namespace std;
S main() {
	U n; cin >> n;
	string s; cin >> s;
	for(U i=0;i<s.size();++i)
		s[i]-='a';
	vector<vector<U>> psum(1000, vector<U>(10000));
	for(U c=0;c<26;++c)
		for(U i=0;i<n;++i)
			psum[c][i+1]= psum[c][i]+(s[i]==c);
	U ma=0;
	for(U i=0;i<n;++i) {
		for(U j=i+1;j<=n;++j) {
			for(U c=0;c<26;++c) {
				if(psum[c][j]-psum[c][(j+i+1)/2] != psum[c][(i+j)/2] - psum[c][i]) {
					goto l0;
				}
			}
			if((j-i)%2)
				goto l0;
			ma= max(ma,j-i);
l0:;
		}
	}
	cout << ma;
}