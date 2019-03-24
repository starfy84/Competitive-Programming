#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n;
    cin>>n;
    int h,t;
    int sum=0;
    for(int x = 0 ;x< n ;x++){
        cin>>h>>t;
        sum += h*t;
    }
    cout<<sum;
    return 0;
}