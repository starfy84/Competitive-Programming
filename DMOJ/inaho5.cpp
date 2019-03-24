#include <bits/stdc++.h>
#define nl "\n"
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    short m;
    unsigned long long ans=0;
    long long temp;
    cin>>m;
    for(int x = 0 ; x < m ; x ++)
    {
        cin>>temp;
        ans-=temp;
    }
    cout<<((ans==0)?"":"-")<<ans;
}