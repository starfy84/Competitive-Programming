#include <iostream>
#include <vector>
#include <string>
#include <fstream>
using namespace std;
#define endl "\n"

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	int a;
	cin>>a;
	if(a==1||a==9||a==10)
		cout<<"1";
	else if(a==2||a==3||a==7 ||a==8)
		cout<<"2";
	else
		cout<<"3";
	

}