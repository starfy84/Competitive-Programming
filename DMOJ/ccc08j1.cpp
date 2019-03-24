#include <iostream>
using namespace std;

int main()
{
	cin.sync_with_stdio(0);
	cin.tie(0);
	double a,b;
	cin >>a>>b;
	double BMI = a/(b*b);
	if(BMI>25)
		cout<<"Overweight";
	else if(BMI>=18.5 && BMI<=25.0)
		cout<<"Normal weight";
	else
		cout<<"Underweight";

}