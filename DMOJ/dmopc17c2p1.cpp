#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n,x,y;
    long long store=0;
    cin>>n;
    for(int i = 0 ; i<n ; i++)
    {
        cin>>x>>y;
        if(y>0)
            store+=x;
    }
    cout<<store;
}