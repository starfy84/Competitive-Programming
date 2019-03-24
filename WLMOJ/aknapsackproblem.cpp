#include <bits/stdc++.h>

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,mw;
    cin>>n>>mw;
    int memo[n+1][mw+1];
    memset(memo,0,sizeof(memo[0][0])*(n+1)*(mw+1));
    for(int x = 1;x <= n;x++)
    {
        int w,v;
        cin>>w>>v;
        for(int y = 1;y <= mw;y++)
        {
            if(y < w)
                memo[x][y] = memo[x-1][y];
            else
            {
                memo[x][y] = max(memo[x-1][y-w]+v,memo[x-1][y]);
            }
        }
    }
    cout<<memo[n][mw];
    return 0;
}