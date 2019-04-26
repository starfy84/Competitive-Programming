#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long 
#define ll long long

int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(NULL);
	cout.tie(NULL);
	cout.sync_with_stdio(NULL);
	vector<int> v1;
	vector<int> v2;
	for(int x=0; x< 4;x++){
		int a; cin >> a;
		v1.push_back(a);
		v2.push_back(a);
	}
	sort(v2.begin(),v2.end());
	// cout<<distance(find(v1.begin(),v1.end(),v2[2]),find(v1.begin(),v2.end(),v2[3]))<<"\n";
	if(abs(distance(find(v1.begin(),v1.end(),v2[2]),find(v1.begin(),v2.end(),v2[3])))==2){
		cout<<"trans\n";
	}
	else 
		cout<<"cis\n";
}