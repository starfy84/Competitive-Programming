#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a<b && b<c && c<d)
		cout<<"Fish Rising";
	else if(a>b && b>c && c>d)
		cout<<"Fish Diving";
	else if(a==b && b==c && c==d)
		cout<<"Fish At Constant Depth";
	else
		cout<<"No Fish";
}