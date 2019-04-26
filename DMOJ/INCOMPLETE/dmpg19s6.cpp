#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long 
#define ll long long

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(NULL);
	cout.tie(NULL);
	cout.sync_with_stdio(NULL);

	int n,q;cin >> n >> q;
	int arr[n+1];arr[0]=0;cin >> arr[1];
	for(int x=2;x<n+1;x++){
		cin >> arr[x];
		arr[x]+=arr[x-1];
	}
	for(int i=0;i<q;i++){
		bool found = false;
		int l,r,x;cin >> l >> r >> x;
		for(int ii=0;ii<r-l+1;ii++){
			for(int jj=ii;jj<r-l+1;jj++){
				if((arr[l+jj+1]-arr[l+ii])==x){
					found = true;
				}
			}
		}
		if(found){
			cout << "YES" << "\n";
		}else{
			cout << "NO" << "\n";
		}
	}
}