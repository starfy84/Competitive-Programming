#include <bits/stdc++.h>

using namespace std;

typedef pair<int,int> pii;

bool comp(const pii &a, const pii &b){
  if(a.first == b.first)
    return a.second < b.second;
  else
    return a.first < b.first;
}

int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    int i, mmax =0,mmin = INT_MAX;
    vector<pii> times; 
    cin >> i;
    for (int x=0; x < i; x++){
        int a,b;
        cin >> a >> b;
        times.push_back({a,b});
        mmax = max(mmax,b);
        mmin = min(mmin,a);
    }
    sort (times.begin(),times.end(),comp);
    int time = mmin, index=0, acc=0;
    while (time < mmax && index < times.size()){
        if (time < times[index].first){
            acc+= times[index].first-time; 
            time =times[index].first;
        }
        if (time >= times[index].first && time < times[index].second)
            time++;
        index++;
    }
    cout << time-times[0].first-acc;
    return 0;
}