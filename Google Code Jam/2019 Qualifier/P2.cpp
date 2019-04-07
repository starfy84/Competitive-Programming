#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    for(int testLoop = 1; testLoop<=T;testLoop++){
        cout<<"Case #"<<testLoop<<": ";
        int mazeSize; cin>>mazeSize;
        string s; cin>>s;
        for(char c:s){
            if(c == 'E')
                cout<<"S";
            else
                cout<<"E";
        }
        cout<<"\n";
    }
}