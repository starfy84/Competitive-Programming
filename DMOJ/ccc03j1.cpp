#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	int t,s,h;
	cin>>t>>s>>h;
	for(int x=0;x<=t;x++)
	{
		if(x==t)
		{
			for(int y = 0;y<s*2+3;y++)
			{
				cout<<"*";
			}
			cout<<endl;
			break;
		}
		cout<<"*";
		for(int y = 0;y<s;y++)
		{
			cout<<" ";
		}
		cout<<"*";
		for(int y = 0;y<s;y++)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
	}
	for(int y=0;y<h;y++)
	{
		for(int x =0;x<s+1;x++)
		{
			cout<<" ";
		}
		cout<<"*"<<endl;
	}

}