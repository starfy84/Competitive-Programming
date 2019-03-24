#include <bits/stdc++.h>

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string yes,no;
    cin>>yes>>no;
    char y[yes.length()+1],n[no.length()+1];
    strcpy(y,yes.c_str());
    strcpy(n,no.c_str());
    char * p = strstr(y,n);
    if(p-y>=0)
        cout<<(p-y);
    else
        cout<<-1;
}