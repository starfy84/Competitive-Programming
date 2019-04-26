#include <bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    int sum =0 ;
    for(int x = 0; x< n;x++){
        int inp; cin >> inp;
        sum+=inp;
        if(sum>200)
            break;
    }
    if(sum>200)
        cout<<"Over maximum capacity!";
    else
        cout<<(200-sum);
    return 0;
}