#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    int no[n];
    for(int x = 0 ;x < n ;x ++){
        cin>>no[x];
    }
    sort(no,no+n);
    for(int x = 0 ; x < n ; x++){
        cout<<no[x]<< "\n";
    }
    return 0;
}