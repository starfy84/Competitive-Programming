#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long 
#define ll long long

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(NULL);
	cout.tie(NULL);
	cout.sync_with_stdio(NULL);
	ull n; cin >> n;
	ull a = round(n/3.0),b=a,c=n-a-b;
	cout<<(a*b*c + b*c + a*b + a*c);
}