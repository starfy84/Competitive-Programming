#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	vector<string> v1,v2;
	int n,count=0;
	string i;
	cin>>n;
	for(int x =0; x<n;x++)
	{
		cin>>i;
		v1.push_back(i);
	}
	for(int x =0; x<n;x++)
	{
		cin>>i;
		v2.push_back(i);
	}
	for(int x =0; x<n;x++)
	{
		if(v1[x][0] == v2[x][0])
			count++; 
	}
	cout<<count;
}