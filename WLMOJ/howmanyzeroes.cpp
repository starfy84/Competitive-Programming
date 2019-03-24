#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long 
#define ll long long

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	int n; cin>>n;
	for(int x =0; x< n;x ++){
		int num; cin>>num;
		int t=0;
		for(int y = 5; num/y>0;y*=5)
			t+=num/y;
		cout<<t<<"\n";
	}
}