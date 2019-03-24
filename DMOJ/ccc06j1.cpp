#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	int b [4] = {461,431,420,0};
	int d [4] = {130,160,118,0};
	int s [4] = {100,57,70,0};
	int dT [4] = {167,266,75,0};
	int w,x,y,z;
	cin>>w>>y>>x>>z;
	cout<<"Your total Calorie count is "<<b[w-1]+d[x-1]+s[y-1]+dT[z-1]<<".";
	
}