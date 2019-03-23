#include <bits/stdc++.h>
using namespace std;

vector<int> prisonAfterNDays(vector<int>& cells, int N) {
	vector<int> store[14];
    vector<int> temp(8);
    for(int x = 0; x < 14;x ++){
        for(int i = 1; i < 7;i++){
            if(cells[i-1] == cells[i+1])
                temp[i] = 1;
            else
                temp[i] = 0;
        }
        cells = temp;
        store[x] = cells;
    }
    return store[(N-1)%14];
}