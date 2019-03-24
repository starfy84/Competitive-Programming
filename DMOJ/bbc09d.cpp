#include <bits/stdc++.h>

using namespace std;

int main() {
    
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int n; cin >> n;
    
    long long int arr[n];
    
    
    for(int x=0;x<n;x++){
        long long int a;cin >> a;
        arr[x] = a;
    }
    sort(arr,arr+n);
    long long int sum = 0;
    for(int x=0, y=n-1;x<n;x++,y--)
    {
        sum+= (arr[x]*arr[y])%10007;
    }
    cout << sum%10007;
}