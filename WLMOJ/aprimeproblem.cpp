#include <bits/stdc++.h>
using namespace std;

int main(){
	cin.tie(0);
	cin.sync_with_stdio(0);
	unsigned long long N;
	cin>>N;
	unsigned long long prod = 1;
	for(unsigned long long x = 2; x*x<=N;x++){
		if(!(N%x)){
			prod *= x;
			while(!(N%x)){
				N/=x;
			}
		}
	}
	cout<<prod*N;
}