#include <bits/stdc++.h>

using namespace std;

int main() {
    int p,c,v;
    cin>>p>>c>>v;
    cout<<p/3 + c/3 + v/3 + (p%3>0?1:0)+(c%3>0?1:0)+(v%3>0?1:0);  
    return 0;
}