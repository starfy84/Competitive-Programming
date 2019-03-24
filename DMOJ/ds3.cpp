#include <bits/stdc++.h>
#define nl "\n"
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;

int gcd(int a,int b)
{
    while(b)
    {
        int t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n>>m;
    int size = n<<1;
    int arr[size][3];
    for(int x= n ;x<size;x++)
    {
        cin>>arr[x][0];
        arr[x][1] = arr[x][0];
        arr[x][2] = 1;
    }
    for(int x = n-1;x>=1;x--)
    {
        arr[x][0] = min(arr[x<<1][0],arr[(x<<1)+1][0]);
        arr[x][1] = gcd(arr[x<<1][1],arr[(x<<1)+1][1]);
        int count=0;
        if(arr[x][1] == arr[x*2][1]) count+=arr[x*2][2];
        if(arr[x][1] == arr[x*2+1][1]) count+=arr[x*2+1][2];
        arr[x][2] = count;
        
    }
    for(int x = 0 ;x < m;x++)
    {
        char inp;
        int l,r;
        cin>>inp>>l>>r;
        if(inp=='C')
        {
            l+=n-1;
            arr[l][0] = r;
            arr[l][1] = r;
            for(int x = l>>1;x>=1;x>>=1)
            {
                arr[x][0] = min(arr[x<<1][0],arr[(x<<1)+1][0]);
                arr[x][1] = gcd(arr[x<<1][1],arr[(x<<1)+1][1]);
                int count=0;
                if(arr[x][1] == arr[x*2][1]) count+=arr[x*2][2];
                if(arr[x][1] == arr[x*2+1][1]) count+=arr[x*2+1][2];
                arr[x][2] = count;
            }
        }
        else if (inp=='M')
        {
            l += n-1;
            r += n;
            int mini=INT_MAX;
            for(;l<r;l>>=1,r>>=1)
            {
                if(l&1)
                    mini = min(mini,arr[l++][0]);
                if(r&1)
                    mini = min(mini,arr[--r][0]);
            }
            cout<<mini<<nl;
        }
        else if(inp == 'G')
        {
            l+=n-1;
            r+=n;
            int geeceedee=0;
            for(;l<r;l>>=1,r>>=1)
            {
                if(l&1)
                    geeceedee= gcd(geeceedee,arr[l++][1]);
                if(r&1)
                    geeceedee = gcd(geeceedee,arr[--r][1]);
            }
            cout<<geeceedee<<nl;
        }
        else
        {
            int ll,rr;
            ll=l+=n-1;
            rr=r+=n;
            int count=0;
            int geeceedee=0;
            for(;ll<rr;ll>>=1,rr>>=1)
            {
                if(ll&1)
                    geeceedee= gcd(geeceedee,arr[ll++][1]);
                if(rr&1)
                    geeceedee = gcd(geeceedee,arr[--rr][1]);
            }
            for(;l<r;l>>=1,r>>=1)
            {
                if(l&1)
                {
                    if(arr[l][1] == geeceedee) count+=arr[l][2];
                    l++;
                }
                if(r&1)
                {
                    if(arr[--r][1] == geeceedee) count+=arr[r][2];
                }
            }
            cout<<count<<nl;

        }
    }
    return 0;
}