#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long
bool primestore[9001];
void make(){
	memset(primestore,true,sizeof(primestore));
	primestore[1] = false;
	for(int x=2;x*x<=9000;x++){
		if(primestore[x]){
			for(int y=x*x;y<=9000;y+=x)
				primestore[y] = false;		
		}
	}
}
bool isPrime(ull n){
	return primestore[n];
}
bool isShady(ull l,ull s){
	return isPrime(l) && isPrime(s);
}

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(NULL);
	cout.tie(NULL);
	cout.sync_with_stdio(NULL);
	make();
	ull n;
	cin>>n;
	for(ull x = 0;x < n;x++){
		string inp;
		cin>>inp;
		ull sum=0;
		for(ull y = 0; y < inp.length();y++){
			sum+= inp[y]-'0';
		}
		if(!isShady(inp.length(),sum))
			cout<<"NO\n";
		else
			cout<<"YES\n";
	}
}