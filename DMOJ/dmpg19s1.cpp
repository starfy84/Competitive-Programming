#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c; cin >> a >> b >> c;
    int C; cin >> C;

    for(int x=0;x<=100;x++){
        for(int y=0;y<=100;y++){
            for(int z=0;z<=100;z++){
                if(a*x+b*y+c*z == C){
                    cout << "QUEST CLEARED";
                    return 0;
                }
            }
        }
    }

    cout << "TRY AGAIN";

    return 0;
}