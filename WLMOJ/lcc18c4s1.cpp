#include<bits/stdc++.h>
using namespace std;
#define U unsigned
#define S signed
S main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    U n; cin >> n;
    deque<U> added,increased,more;
    for(U i=0;i<n;++i) {
    	U a; cin >> a;
    	string b,c; cin >> b >> c;
    	if(b=="added") {
    		added.push_back(a);
    	} else if(b=="increased")
    		increased.push_back(a);
    	else
    		more.push_back(a);
    }
    double dmg= 0;
    for(U x:added)
    	dmg+= x;
    U asdf= 0;
    for(U x:increased)
    	asdf+= x;
    dmg= dmg*(100+asdf)/100.0;
    for(U x:more)
    	dmg+= dmg*x/100.0;
    cout << fixed<<setprecision(6)<<dmg << endl;
}