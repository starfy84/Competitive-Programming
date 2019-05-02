#include<bits/stdc++.h>
using namespace std;

int main(){
	int n = INT_MAX;
	int arr[4][4];
	for(int x = 0 ;x<4;x++){
		for(int y = 0; y<4;y++){
			cin>>arr[x][y];
		}
	}
	for(int x = 0 ;x<4;x++){
		int sumc=0,sumr=0;
		for(int y = 0; y<4;y++){
			sumr+=arr[x][y];
			sumc+=arr[y][x];
		}
		if((sumr==sumc && sumr == n) || n == INT_MAX){
			n = sumr;
		}
		else{
			cout<<"not magic";
			return 0;
		}
	}
	cout<<"magic";
	return 0;

}