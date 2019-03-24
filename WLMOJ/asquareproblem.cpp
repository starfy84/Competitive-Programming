#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

int main() {
    int n;
    cin>>n;
    for(int x = 0; x < n ;x++)
    {
        bool breaker=false;
        ull a,b;
        cin>>a>>b;
        if(a-b==1)
        {
            ull c = a+b;
            for(int y = 2; y <= sqrt(c); y++)
            {
                if(c%y==0)
                {
                    breaker = true;
                    cout<<"NO\n";
                    break;
                }
            }
            if(!breaker)
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
        
    }
    return 0;
}