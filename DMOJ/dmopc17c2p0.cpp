#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    int x1,y1,x2,y2,xS,yS,dist;
    cin>>x1>>y1>>x2>>y2>>xS>>yS>>dist;
    if(sqrt((xS-x1)*(xS-x1)+(yS-y1)*(yS-y1))<=dist || sqrt((xS-x2)*(xS-x2)+(yS-y2)*(yS-y2))<=dist)
        cout<<"Yes";
    else
        cout<<"No";
}