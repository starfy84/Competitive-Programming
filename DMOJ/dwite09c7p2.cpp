#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long 
#define ll long long

ull MAX = 100000;
bool primes[100001];
void make(){
	memset(primes,true,MAX+1);
	primes[0] = primes[1] = false;
	for(ull x = 2; x * x <= MAX;x++){
		if(primes[x])
			for(ull y = x*x; y<= MAX; y+=x){
				primes[y] = false;
			}
	}
}
int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(NULL);
	cout.tie(NULL);
	cout.sync_with_stdio(NULL);
	make();
	for(ull x = 0;x < 5;x++){
		ull n,sum = 0; cin >> n;
		for(ull y = 0;y <= n;y++)
			if(primes[y])
				sum+=y;
		cout<<sum<<"\n";
	}
}