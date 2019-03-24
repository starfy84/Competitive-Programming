#include <bits/stdc++.h>
#define nl "\n"
using namespace std;
int findDiv(int num)
{
    int count=2;
    for(int x = 2 ;x < num ; x++)
    {
        if(num/x==double(num)/x)
            count++;
    }
    return count;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int u,l,count=0;
    cin>>u>>l;
    for(int x = u ; x <= l ; x++)
    {
        if(findDiv(x)==4)
            count++;
    }
    printf("The number of RSA numbers between %d and %d is %d\n",u,l,count);
}