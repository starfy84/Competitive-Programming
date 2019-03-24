#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	int t,a=0,b=0;
	string s;

	cin>>t>>s;
	s.shrink_to_fit();
	for(int x = 0;x<t;x++)
	{
		if(s.at(x)=='A')
			a++;
		else
			b++;
	}
	if(a>b)
		cout<<"A";
	else if(a<b)
		cout<<"B";
	else
		cout<<"Tie";
	
}