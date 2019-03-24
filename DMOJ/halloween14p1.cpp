#include <bits/stdc++.h>
#define nl "\n"
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    int remainder = n%k;
    if(n%k==0)
        cout<<0;
    else if(n<k)
        cout<<k-remainder;
    else
    {
        
        if(remainder>=k/2.0)
            cout<<k-remainder<<nl;
        else
            cout<<remainder<<nl;
    }
    