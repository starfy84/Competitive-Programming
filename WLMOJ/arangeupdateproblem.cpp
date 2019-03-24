#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main() {
    ull n,q;
    cin>>n>>q;
    ull a[n+1],diff[n+2];
    a[0]=0;
    diff[0] = 0;
    for(int x = 1 ;x<=n;x++)
    {
        cin>>a[x];
        diff[x]= a[x] - a[x-1];
    }
    for(int x = 0; x< q; x++)
    {
        ull l,r,v;
        cin>>l>>r>>v;
        diff[l] +=v;
        diff[r+1] -=v;
    }
    ull last = a[0];
    for(int x = 1; x< n+1 ;x++)
    {
      cout<<diff[x]+last<<" ";
      last = diff[x] + last;
    }
    return 0;
}