#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    vector<int> outp;
    for(int x = 0 ;x < nums.size();x++){
        vector<int>::iterator it = find(nums.begin(),nums.end(),target-nums[x]);
        int x2 = distance(nums.begin(),it);
        if(it!=nums.end() && x2 != x){
            outp.push_back(x+1);
            outp.push_back(x2+1);
            sort(outp.begin(),outp.end());
            return outp;
        }
    }
    return outp;
}