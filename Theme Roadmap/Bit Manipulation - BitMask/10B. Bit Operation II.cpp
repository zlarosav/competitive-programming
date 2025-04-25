#include <bits/stdc++.h>
 
using namespace std;
 
void solve() {
	long long a, b; cin >> a >> b;
	bitset<32> bitA(a), bitB(b);
	cout << (bitA & bitB) << endl;
	cout << (bitA | bitB) << endl;
	cout << (bitA ^ bitB) << endl;
}
 
int main(){
	ios_base::sync_with_stdio(0);
  cin.tie(0);

	int t = 1;
	// cin >> t;
	while(t--)
		solve();

  return 0;
}