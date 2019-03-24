#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	int n,input;
	cin>>n;
	vector<int> v;

	while (n--){
		cin >> input;
		v.push_back(input);
	}

	sort(v.begin(),v.end());

	for(int x:v){
		cout << x << endl;
	}

}