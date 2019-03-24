#include <bits/stdc++.h>

using namespace std;

long long dp[2][20000];

const int MOD = 1000000007;

int main()
{
    int a, b, d, n;
    char c;
    scanf("%i", &a);
    for (int x = 0; x < a; x++)
        scanf(" %c", &c);
    scanf("%i", &b);
    for (int x = 0; x < b; x++)
        scanf(" %c", &c);
    dp[0][1] = b, dp[1][1] = a;
    for (int x = 2; x <= 10000; x++)
    {
        dp[0][x] = dp[1][x-1]*b%MOD + dp[0][x-1]*(b-1)%MOD;
        dp[1][x] = dp[0][x-1]*a%MOD; 
    }
    scanf("%i", &n);
    while(n--)
    {
        scanf("%i", &d);
        printf("%lli\n", (dp[1][d] + dp[0][d])%MOD);
    }
}