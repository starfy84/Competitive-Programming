#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	string in;
	vector<string> v;
	int sad=0,happy=0;
	getline(cin,in);
	for(unsigned int x = 0;x<in.length();x++)
	{
		if(in[x]==':')
			v.push_back(in.substr(x,3));
	}
	for(string x:v)
	{
		if(x[2] == '(')
			sad++;
		else if(x[2] == ')')
			happy++;
	}
	if(sad>happy)
		cout<<"sad";
	else if(sad<happy)
		cout<<"happy";
	else if(sad ==0 && happy == 0)
		cout<<"none";
	else if(sad==happy)
		cout<<"unsure";
}