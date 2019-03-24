#include <bits/stdc++.h>
#define ull unsigned long long
using namespace std;

ull pow(ull n, ull m,ull p)
{
    ull result=1;
    while(m!=0){
        if((m&1)==1)
            result = result*n %p;
		n= n*n %p;
		m>>=1;
    }
    return (ull)result;
}
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    ull  n,m,p;
    cin>>n>>m>>p;
    cout<<pow(n,m,p);
    return 0;
}