#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long 
#define ll long long

int main(){
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n,s;cin>>n>>s;
    bool dp[s+1];
    memset(dp,false,s+1);
    dp[0] = true;
    vector<int> store;
    for(int x = 0 ;x < n; x ++){
        int c; cin>>c;
        if(c<=s){
            store.push_back(c);
            dp[c] = true;
        }
    }
    n = store.size();
    for(int x = 0; x < n ;x++){
        for(int y = 0; y+store[x] <= s; y++){
            if(dp[y]){
                dp[y+store[x]] = true;
            }
        }
    }
    cout<<(dp[s]?"YES\n":"NO\n");
}