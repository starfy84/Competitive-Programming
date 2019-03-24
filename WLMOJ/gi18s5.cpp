#include <bits/stdc++.h>

using namespace std;

int MOD = 1000000007;

int main()
{
    int n, a, b, q;
    scanf("%i", &n);
    vector<vector<char>> arr(n, vector<char>(n));
    vector<vector<long long>> dp(n, vector<long long>(n));
    for (auto &x : arr)
        for (auto &y : x)
            scanf(" %c", &y);
    for (int x = 0; x < n; x++)
        if (arr[n-1][x] == 'O')
            dp[n-1][x] = 1;
    for (int x = n-1; x > 0; x--)
    {
        for (int y = 0; y < n; y++)
            dp[x][y] %= MOD;
        for (int y = 0; y < n; y++)
            if (dp[x][y])
                for (int z = -1; z < 2; z++)
                    if (arr[x-1][y+z] == 'O')
                        dp[x-1][y+z] += dp[x][y];
    }
    for (int x = 1; x < n; x++)
        dp[0][x] += dp[0][x-1];
    for (int x = 0; x < n; x++)
        dp[0][x] %= MOD;
    scanf("%i", &q);
    while (q--)
    {
        scanf("%i%i", &a, &b);
        ----a, --b;
        printf("%lli\n", ((dp[0][b] - (a >= 0 ? dp[0][a] : 0))%MOD+MOD)%MOD);
    }
}