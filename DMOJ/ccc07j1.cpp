#include <iostream>
using namespace std;

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	int a,b,c;
	cin >>a>>b>>c;
	if((a>b &&a<c)||(a<b && a>c))
	{
		cout<<a;
	}
	else if((b<a &&b>c)||(b>a && b<c))
	{
		cout<<b;
	}
	else
	{
		cout<<c;
	}
	
}