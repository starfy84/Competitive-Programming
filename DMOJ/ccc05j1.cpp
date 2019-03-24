#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <math.h>
using namespace std;
#define endl "\n"
double doubles(double n)
{
	return round(n*100)/100;
}
int sub(int a,int b)
{
	if(a-b<0)
	{
		return 0;
	}
	else
		return a-b;
}
int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	double d,e,w,a,b;
	cin>>d>>e>>w;
	a = (sub(d,100) * 0.25)+(e*0.15)+(w*0.20);
	b = (sub(d,250)*0.45)+(e*0.35)+(w*0.25);
	cout<<"Plan A costs "<<a<<endl<<"Plan B costs "<<b<<endl;
	if(a<b)
		cout<<"Plan A is cheapest.";
	else if(a>b)
		cout<<"Plan B is cheapest.";
	else
		cout<<"Plan A and B are the same price.";
}