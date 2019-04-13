#include <bits/stdc++.h>

using namespace std;
bool f(int N){
    if(N==1)
    return false;
    for(int x = 2;x*x<=N;x++){
        if(N%x==0)
            return false;
    }
    return true;
}

int main() {
    return 0;
}