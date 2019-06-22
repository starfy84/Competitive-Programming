#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <queue>
#include <deque>
#include <bitset>
#include <iterator>
#include <list>
#include <stack>
#include <map>
#include <set>
#include <functional>
#include <numeric>
#include <utility>
#include <limits>
#include <time.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#define nl "\n"
#define ull unsigned long long
#define u unsigned
#define ll long long
#define imax INT_MAX
using namespace std;

int main(){
  cin.tie(0);
  cin.sync_with_stdio(0);
  bool tf = false;
  int r,x,y,xa,ya,ma,xb,yb,mb,xc,yc,mc; cin >>r>>x>>y>>xa>>ya>>ma>>xb>>yb>>mb>>xc>>yc>>mc;
  int minn = min(min(ma,mb),mc);
  if (minn == ma)
    tf = sqrt((xa-x)*(xa-x)+(ya-y)*(ya-y)) < r;
  else if(minn == mb)
    tf = sqrt((xb-x)*(xb-x)+(yb-y)*(yb-y)) < r;
  else
    tf = sqrt((xc-x)*(xc-x)+(yc-y)*(yc-y)) < r;
  if(tf)
    cout<<"What a beauty!";
  else
    cout<<"Time to move my telescope!";
}