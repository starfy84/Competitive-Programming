#include <bits/stdc++.h>

using namespace std;

int main() {
    int inp[3];
    for(int x = 0; x < 3; x++){
        cin>>inp[x];
    }
    sort(inp,inp+3);
    cout<<((inp[0]*inp[1])/2);
    return 0;
}