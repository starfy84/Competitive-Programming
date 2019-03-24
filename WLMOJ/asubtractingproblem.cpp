#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    int q,a,b;
    cin>>q;
    for(int x = 0; x< q; x++){
        cin>>a>>b;
        cout<<(min(a,b) - max(a,b))<<"\n";
    }
    return 0;
}