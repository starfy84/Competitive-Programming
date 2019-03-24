#include<bits/stdc++.h>
#define U unsigned
#define S signed
using namespace std;
S main() {
	U n; cin >> n;
	vector<S> a(n);
	for(S&x:a)
		cin >> x;
	sort(a.begin(),a.end());
	U c=0;
	for(S i=a.size()-1;1<=i;----i) {
		if(a[i]<0 || a[i-1]<0)
			break;
		c+= a[i]*a[i-1];
	}
	for(S i=0;i<a.size();++++i) {
		if(0<a[i]||0<a[i+1])
			break;
		c+= a[i]*a[i+1];
	}
	cout << c;
}