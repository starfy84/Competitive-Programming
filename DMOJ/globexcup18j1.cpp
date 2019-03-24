#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n,up=0,down=0;
    double x,temp;
    cin>>n;
    for(int x= 0 ;x < n; x++){
        cin>>x;
        if(modf(x,&temp)>=0.5)
            up++;
        else
            down++;
    }
    cout<<up<<"\n"<<down<<"\n";
    return 0;
}