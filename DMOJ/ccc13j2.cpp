#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	string in;
	bool correct = true;
	cin>>in;
	for(unsigned int x = 0;x<in.length();x++)
	{
		if(in[x] != 'I' && in[x] != 'O' && in[x] != 'S' && in[x] != 'H' && in[x] != 'Z' && in[x] != 'X' && in[x] != 'N')
		{
			correct = false;
			break;
		}
	}
	if(correct)
		cout<<"YES";
	else
		cout<<"NO";
}