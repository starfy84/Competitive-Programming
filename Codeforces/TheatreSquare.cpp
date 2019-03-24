#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long 
#define ll long long

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(NULL);
	cout.tie(NULL);
	cout.sync_with_stdio(NULL);
	ull n,m,a; cin >> n >> m >> a;
	cout<< ((m+a-1)/a)*((n+a-1)/a) << "\n";
}