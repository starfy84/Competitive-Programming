#include <bits/stdc++.h>
using namespace std;

void helper(vector<char>& s,int i){
    if(i<s.size()/2){
        char temp = s[i];
        s[i] = s[s.size()-i-1];
        s[s.size()-i-1] = temp;
        helper(s,i+1);
    }
}
void reverseString(vector<char>& s) {
    helper(s,0);
}