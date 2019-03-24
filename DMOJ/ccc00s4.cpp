#include <bits/stdc++.h>
#define nl "\n"
#define u unsigned
#define s signed
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int d,n;
    cin>>d>>n;
    d++;
    int arr[n];
    for(int x=0;x<n;++x) cin>>arr[x];
    vi v(d,INT_MAX); v[0] = 0;
    for(u i = 1; i < d; i++)
        for(u j = 0; j < n; j++)
            if((s)i-(s)arr[j] >= 0 && v[i-arr[j]] != INT_MAX)
                v[i] = min(v[i], v[i-arr[j]]+1);
    if(v[d-1] == INT_MAX)
        cout<<"Roberta acknowledges defeat.";
    else
        cout<<"Roberta wins in "<<v[d-1]<<" strokes.";
    cout<<nl;
    return 0;
}