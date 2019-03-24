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
    int n,m;
    cin>>n>>m;
    int size = 1<<(n+1);
    int arr[size][2];
    for (int x = 1<<n ;x< size ; x++)
    {
        cin>>arr[x][0];
        arr[x][1]=x;
    }
    for (int x = (1<<n)-1; x>=1 ; x--)
        if(arr[x*2][0]>arr[x*2+1][0])
        {
            arr[x][0] = arr[x*2][0];
            arr[x][1] = arr[x*2][1];
        }
        else
        {
            arr[x][0] = arr[x*2+1][0];
            arr[x][1] = arr[x*2+1][1];
        }
    for(int x =0 ;x < m ;x ++)
    {
        char inp;
        cin>>inp;
        if(inp=='R')
        {
            int i,s;
            cin>>i>>s;
            i += (1<<n)-1;
            arr[i][0] = s;
            for (int x = i>>1; x>=1 ; x>>=1)
                if(arr[x*2][0]>arr[x*2+1][0])
                {
                arr[x][0] = arr[x*2][0];
                arr[x][1] = arr[x*2][1];
                }
                else
                {
                    arr[x][0] = arr[x*2+1][0];
                    arr[x][1] = arr[x*2+1][1];
                }
        }
        else if(inp == 'W')
            cout<<arr[1][1] - (1<<n) + 1<<nl;
        else
        {
            int i,c=0,prev;
            cin>>i;
            i += (1<<n)-1;
            prev = arr[i][0];
            for(int x = i>>1 ;x >=1; x>>=1,c++)
                if(prev != arr[x][0])
                    break;
            cout<<c<<nl;
        }
    }
    return 0;
}