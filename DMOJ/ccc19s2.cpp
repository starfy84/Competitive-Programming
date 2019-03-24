#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long 
#define ll long long

ull MAX = 2000001;
vector<ull> p;
bool s[2000002];
void make(){
	memset(s,true,MAX+1);
	s[0]=s[1]=false;
	for(ull x = 2; x*x<= MAX; x++){
		if(s[x]){
			for(ull y = x*x; y <= MAX;y+=x){
				s[y] = false;
			}
		}
	}
	for(ull x = 0;x<=MAX;x++){
		if(s[x]){
			p.push_back(x);
		}
	}
}

void valid(ull num){
	for(ull x = 0;x < p.size();x++){
		if(s[num-p[x]]){
			cout<<p[x]<<" "<<num-p[x]<<"\n";
			return;
		}
	}
	return;

}

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(NULL);
	cout.tie(NULL);
	cout.sync_with_stdio(NULL);
	make();
	ull n; cin >> n;
	while(n--){
		ull num; cin >> num;
		num *= 2;
		valid(num);
	}
}