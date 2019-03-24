#include <stdio.h>
#define nl "\n"
#define ull unsigned long long
ull mod = 1000000000+7;
ull pow(ull a, ull k)
{
    ull result=1;
    while(k){
        if(k&1)
            result = result*a %mod;
        a= a*a %mod;
        k>>=1;
    }
    return (ull)result;
}
int main(){
    ull N;
    scanf("%llu",&N);
    printf("%llu",(8*pow(2, N)-5)%mod);
}