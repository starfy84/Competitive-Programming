#include <bits/stdc++.h>

using namespace std;

int to_bin(string s){
  int len = s.length();
  int out = 0;
  for(int x=0;x<len;x++){
    if(s[x]=='1')
      out+=pow(2,len-x-1);
  }
  return out;
}

int main() {
    int n;cin >>n;
    string s; cin >> s;
    vector<string> nums;
    
    string scur = "";
    for(int i=0;i<n;i++){
      char first = s[i*8];
      for(int x=1;x<8;x++){
        char cur = s[i*8+x];
        scur += cur;
      } 
      //end of vint
      if(first=='0'){
        nums.push_back(scur);
        scur = "";
      }
    }
    for(int x=0;x<nums.size();x++){
      cout << to_bin(nums[x]) << " ";
    }

}