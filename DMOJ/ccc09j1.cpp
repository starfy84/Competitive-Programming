#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	int num = 91,a,b,c;
	cin>>a>>b>>c;
	cout<<"The 1-3-sum is "<<(a+(b*3)+c)+num;
}