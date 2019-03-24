#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.sync_with_stdio(0);
  	cin.tie(0);
  	long long x;
  	long long power = 2147483648;
  	long long inv = 1857678181;
  	cin >> x;
  	cin >> x;
  	x -= 12345;
  	x = (x*inv)%power;
  	cout << x;
    return 0;
}