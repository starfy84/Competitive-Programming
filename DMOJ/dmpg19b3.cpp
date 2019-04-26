#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long 
#define ll long long

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(NULL);
	cout.tie(NULL);
	cout.sync_with_stdio(NULL);
	string s; cin >> s;
	int k; cin >> k;

	regex re("([S])\\1{"+to_string(k-1)+",}");
	smatch ma;
	if(regex_search(s,ma,re)){
		cout<<"Spamming";
	}
	else
		cout<<"All good";
}