#include <bits/stdc++.h>
using namespace std;

int main(){
    int T; cin >> T;
    for(int testLoop = 1; testLoop<=T;testLoop++){
        cout<<"Case #"<<testLoop<<": ";
        string::size_type sz = 0;
        unsigned long long old; cin >>old;
        string s = to_string(old);
        unsigned long long num=0;
        for(int x = 0;x < s.length();x++){
            if(s[x]=='4')
                num+=s[x]-1-'0';
            else
                num+=s[x]-'0';
            num*=10;
        }
        num/=10;
        cout<<num<<" "<<old-num<<"\n";
        
        
    }
}