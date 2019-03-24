#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    unsigned L,W,H;
    cin>>L>>W>>H;
    cout<<setprecision(0)<<fixed<<(((L*W)+(2*L*(H-1))+(2*(W-2)*(H-1)))*9/32.0)+0.5;
    return 0;
}