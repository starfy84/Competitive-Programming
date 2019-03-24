#include <bits/stdc++.h>

using namespace std;
int gcd(int a,int b){
    if(a==0)
        return b;
    return gcd(b%a,a);
}
int main()
{
    cin.tie(0);
    cout.tie(0);
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    ios_base::sync_with_stdio(0);
    int n; cin >> n;
    int a[n];
    for(int x = 0;x < n;x++){
        cin >> a[x];
    }
    int out = a[0];
    for(int x = 1; x< n;x++){
        out = gcd(out,a[x]);
    }
    cout << out;
}