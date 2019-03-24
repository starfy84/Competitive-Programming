#include <bits/stdc++.h>
using namespace std;

#define endl "\n"

int main()
{
    cin.sync_with_stdio(0);
    cin.tie(0);
    int start,end;
    cin>>start>>end;
    for(int x = start; x<=end;x+=60)
    {
        if(x>end)
            break;
        cout<<"All positions change in year "<<x<<endl;
    }
}