#include <bits/stdc++.h>
#define nl "\n"
using namespace std;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned int n,q;
    cin>>n>>q;
    unsigned int size = n<<1;
    unsigned int arr[size];
    for(unsigned int x= n ;x<size;x++)
        cin>>arr[x];
    for(unsigned int x = n-1;x>=1;x--)
        arr[x] = arr[x<<1] & arr[(x<<1)+1];
    for(unsigned int l = 0 ; l < q ;l++){
        char inp;
        unsigned int x;
        cin>>inp>>x;
        if (inp =='U')
        {
            unsigned int val;
            cin>>val;
            x+=n-1;
            arr[x] = val;
            for(unsigned int i = x>>1;i>=1;i>>=1)
                arr[i] = arr[i<<1] & arr[(i<<1)+1];
        }
        else
        {
            unsigned int y,val;
            cin>>y>>val;
            x+=n-1;
            y+=n;
            for(;x < y;x >>= 1,y >>= 1)
            {
                if(x & 1)
                    val &= arr[x++];
                if(y & 1)
                    val &= arr[--y];
            }
            cout<<val<<nl;
        }
    }
    return 0;
}