#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long 
#define ll long long

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(NULL);
	cout.tie(NULL);
	cout.sync_with_stdio(NULL);
	int n; cin >> n;
	assert(n>=2 && n <=100000);
	int a[n];
	for(int x = 0;x < n ;x++){
		cin >> a[x];
		assert(a[x] >= 1 && a[x] <= 1000);
	}
	sort(a,a+n);
	cout<<a[n-2];
}