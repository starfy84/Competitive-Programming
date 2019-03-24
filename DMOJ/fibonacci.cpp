#include <bits/stdc++.h>
#define nl "\n"
using namespace std;
vector<vector<unsigned long long>> matrix={{1,0},{0,1}};
vector<vector<unsigned long long>> multiply(vector<vector<unsigned long long>>a, vector<vector<unsigned long long>>b) {
    vector<vector< unsigned long long>> arr(2,vector<unsigned long long>(2));
    for (int x = 0; x < 2; x++)
        for (int y = 0; y < 2; y++)
            for (int z = 0; z < 2; z++)
                arr[x][y] += a[x][z] * b[z][y]%1000000007;
    return arr;
}
void cal(unsigned long long n)
{
    if (n > 1) {
        cal(n/2);
        matrix = multiply(matrix,matrix);
    }
    if (n%2==1)
        matrix = multiply(matrix,{{1,1},{1,0}});
}
unsigned long long fib(unsigned long long n)
{
    cal(n-1);
    return matrix[0][0];
}
int main() {
   ios_base::sync_with_stdio(0);
    cin.tie(0);
    unsigned long long num=0;
    cin>>num;
    cout<<fib(num)%1000000007;
}