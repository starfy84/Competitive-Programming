#include <stdio.h>
#define ll long long
ll max(ll a, ll b){
        return a>b?a:b;
}

int main(){
        int n;
        scanf("%i",&n);
        ll memo[n][2];
        for(int x = 0; x < n ;x++){
                int val;
                scanf("%i",&val);
                if(x==0){
                        memo[0][0] = 0;
                        memo[0][1] = val;
                }
                else{
                        memo[x][0] = max(memo[x-1][0],memo[x-1][1]);
                        memo[x][1] = memo[x-1][0] + val;
                }
        }
        printf("%lld",max(memo[n-1][0],memo[n-1][1]));
}