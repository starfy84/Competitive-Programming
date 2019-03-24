#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    unsigned n, q;
    unsigned long long add = 0;
    cin>>n>>q;
    while(q--){
        unsigned num,lv,r;
        cin>>num>>lv;
        if(num == 1){
            cin>>r;
            cout<<((r-lv+1)*add)<<"\n";
        }
        else{
            add += lv;
        }
    }
    return 0;
}