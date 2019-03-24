#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    string name="";
    int year=INT_MAX;
    for(int x = 0 ;x < n ;x++){
        string nameinp;
        int yearinp;
        cin>>nameinp>>yearinp;
        if(yearinp<year){
            name=nameinp;
            year=yearinp;
        }
    }
    cout<<name;
    return 0;
}