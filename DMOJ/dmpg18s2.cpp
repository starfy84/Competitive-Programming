#include <bits/stdc++.h>
#define nl "\n"
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n; cin >> n;
    ll arr[n];
    cin>>arr[0];
    for(int x=1;x<n;x++){
        ll a; 
        cin >> a;
        arr[x] = arr[x-1] + a;
    }
    
    ll top;
    if(n%2 == 1) 
    	top = (n>>1)+1;
    else 
    	top = n>>1;
    
    vector<ll> lul;
    lul.push_back(arr[n-1]);
    
    ll lb = 1,rb = n-2;
    
    cout << lul[0] << nl;
    
    for(ll k=2;k<=top;k++){
        
        ll sum = lul[k-2] + (arr[rb] - arr[lb-1]);
        lul.push_back(sum);
        if(n%2 == 1 && k == top) lul.pop_back();
        cout << sum << nl;
        lb++; rb--;
    }
    for(ll x=lul.size()-1;x>=0;x--){
        cout << lul[x] << nl;
    }
    return 0;
}