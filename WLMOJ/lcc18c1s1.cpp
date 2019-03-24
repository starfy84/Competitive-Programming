#include<bits/stdc++.h>
#define U unsigned
#define S signed
using namespace std;
S main() {
	U n; cin >> n;
	U prev= -1;
	U c=0;
	for(;n--;) {
		U a; cin >> a;
		if(a==prev)
			++c;
		prev= a;
	}
	cout << c;
}