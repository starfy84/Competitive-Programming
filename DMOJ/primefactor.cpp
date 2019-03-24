#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n; cin >> n;
	while(n--){
	unsigned long long m; cin>>m;
	for(unsigned long long x = 2; x*x<=m;x++){
		while(!(m%x)){
			m/=x;
			cout<<x<<" ";
		}
	}
	cout<<(m==1?"":to_string(m))<<"\n";
	}
}