#include <bits/stdc++.h>
using namespace std;

#define endl "\n"
int main() {
    cin.sync_with_stdio(0);
    cin.tie(0);
    
    int length,min,times,arg1,arg2,arg3;
    cin>>length>>min>>times;
    vector<int> stations(length+1);
    int count = 0;
    int current = 0;
    for(int x = 0 ; x < times ; x++)
    {
        cin>>arg1>>arg2>>arg3;
        stations[arg1-1] += arg3;
        stations[arg2] -= arg3;
    }
    for(unsigned int x = 0 ;  x < stations.capacity() ; x++)
    {
        int temp = current;
        current +=stations[x];
        stations[x] += temp;
    }
    for(unsigned int y = 0 ; y<stations.capacity()-1;y++)
    {
        if (stations[y] < min)
            count++;
    }
    cout<<count;
}