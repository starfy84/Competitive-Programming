#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	int w=0;
	for(int x = 0 ; x<6;x++)
	{
		string s;
		cin>>s;
		if(s[0] == 'W')
			w++;
	}
	if(w==5 || w==6)
		cout<<"1";
	else if(w==3 || w==4)
		cout<<"2";
	else if(w==1 || w==2)
		cout<<"3";
	else
		cout<<"-1";
}