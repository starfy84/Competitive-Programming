#include <bits/stdc++.h>
using namespace std;
#define ull unsigned long long 
#define ll long long

int main(){
    cin.tie(NULL);
    cin.sync_with_stdio(NULL);
    cout.tie(NULL);
    cout.sync_with_stdio(NULL);
    
    char grid[10][10];

    for(int x=0;x<10;x++){
        string s; cin >> s;
        for(int y=0;y<10;y++){
            grid[x][y] = s[y];
        }
    }

    string crypt; cin >> crypt;
    string ans="";ans+=crypt[0];
    // cout<<ans<<endl;
    for(int x=1;x<crypt.length();x++){
        int z = distance(grid[ans[x-1]-'0'],find(grid[ans[x-1]-'0'],grid[ans[x-1]-'0']+10,crypt[x]));
        ans+= to_string(z); 
    }
    cout << ans;

}