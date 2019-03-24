#include <bits/stdc++.h>
using namespace std;
int main(){
	cin.tie(NULL);
	cin.sync_with_stdio(NULL);
	cout.tie(NULL);
	cout.sync_with_stdio(NULL);
	string s; cin >> s;
	int v=0,h=0;
	for(int x = 0;x < s.length();x++){
		if(s[x]=='V'){
			v++;
		}
		else
			h++;
	}
	if(v%2==0 && h%2 == 0){
		cout<<"1 2\n3 4";
	}
	else if(v%2==0 && h%2 == 1){
		cout<<"3 4\n1 2";
	}
	else if(v%2 ==1 && h%2 ==0){
		cout<<"2 1\n4 3";
	}
	else
		cout<<"4 3\n2 1";
}