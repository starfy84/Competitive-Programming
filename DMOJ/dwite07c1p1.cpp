#include <bits/stdc++.h>

using namespace std;
bool isp(int n){
    if(n<=1) return false;
    for(int x = 2; x*x <= n;x++ ){
        if(n%x==0)
            return false;
    }
    return true;
}
int main() {
    int n; cin >> n;
    if(isp(n)) cout <<"prime\n";
    else cout << "not\n";
    return 0;
}