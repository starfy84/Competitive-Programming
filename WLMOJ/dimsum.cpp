#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,p,total=0;
    cin>>n;
    for(int x = 0 ;x < n; x++){
        cin>>p;
        total += p;
    }
    cout<<total;
    return 0;
}