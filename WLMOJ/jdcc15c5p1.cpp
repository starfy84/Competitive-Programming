#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    for(int i= 0 ; i< t;i++){
        double x1,y1,x2,y2;
        cin>>x1>>y1>>x2>>y2;
        cout<<( (  (x1 == 0 && y1 == 0) || (x2 == 0 && y2 == 0) ||( (x1==0 || y1 == 0) && (x1 == x2 && y1 == y2) ) || (x2/x1*y1) == y2 || (y2/y1*x1) == x2)?"YES\n":"NO\n");
    }
    return 0;
}