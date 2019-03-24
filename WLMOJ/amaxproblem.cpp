#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    unsigned long long ma=0;
    for(int x = 0; x < n; x++){
        long long inp;
        cin>>inp;
        inp = abs(inp);
        if(inp>ma)
          ma = inp;
    }
    cout<<(ma*ma);
    return 0;
}