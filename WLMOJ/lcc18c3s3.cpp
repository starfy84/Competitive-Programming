#include<bits/stdc++.h>
using namespace std;
#define U unsigned long long
#define S signed
U mi;
void dfs(U n,U i){
    if(i == mi){
        return;
    }
    if(n==1&&i<mi){
        mi = i;
        return;
    }
    U c =0;
    U fuk = n;
    while(fuk){
        c += fuk %10;
        fuk/=10;
    }
    dfs(n/c,i+1);
    dfs(n-1,i+1);
}
S main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    U n,nb,i=0;
    cin>>n;
    nb = n;
    while(n-1){
        if(!(n%10)){
            n--;
        }
        else{
            U c =0;
            U fuk = n;
            while(fuk){
                c += fuk %10;
                fuk/=10;
            }
            n/=c;
        }
        i+=1;
    }
    mi = i;
    dfs(nb,0);
    cout<<mi;
}