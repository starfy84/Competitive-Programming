#include <bits/stdc++.h>

using namespace std;

int main() {
    string s;
    getline(cin,s);
    
    regex reg(":[a-z A-Z0-9]+:");
    
    auto beg = sregex_iterator(s.begin(),s.end(),reg);
    auto end = sregex_iterator();
    for(sregex_iterator x = beg; x!=end;x++){
    	string ss = (*x).str(),sub=ss.substr(1,ss.length()-2);
    	if(sub.length()!=0)
    		cout<<sub<<"\n";
    }
    return 0;
}