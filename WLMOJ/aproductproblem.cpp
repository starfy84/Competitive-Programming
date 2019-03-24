#include <bits/stdc++.h>
#define MOD 1000000007
using namespace std;

int main() {
    unsigned long long a,b;
    cin>>a>>b;
    cout<<((a%MOD) * (b%MOD))%MOD;
    return 0;
}