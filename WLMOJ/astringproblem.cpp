#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0);
    cout.tie(0);
    cin.sync_with_stdio(0);
    cout.sync_with_stdio(0);
    ios_base::sync_with_stdio(0);
    vector<int> freq(123);
    // fill(freq.begin(),freq.end(),0);
    string str1,str2; getline(cin,str1); getline(cin,str2);
    for(char c:str1){
        freq[c]++;
    }
    for(char c:str2){
        freq[c]--;
    }
    for(int x= 0; x < 123;x++){
        if(freq[x]>0){
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}