#include <bits/stdc++.h>
using namespace std;

#define endl "\n"


int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    long long int a;
    bool prime=true;
    cin>>a;
    if(a==0)
        a+=2;
    else if (a==1)
        a++;
    while(true)
    {
        
        prime = true;
        if(a%2==0 && a!=2)
            a++;
        if(a%3==0 && a!=3)
            a+=2;
        for(long long int x = 2 ; x <=sqrt(a);x++)
        {
            if (a%x==0)
            {
                a+=2;
                prime=false;
                break;
            }
        }
        if(prime)
            break;
    }
    cout<<a;
}