#include <bits/stdc++.h>

using namespace std;

void toBinary(int x, bool reverse) {
  string binario = "";
  if (reverse) {
    for (int i = 31; i >= 0; i--) {
      binario += ((x >> i) & 1LL) ? '0' : '1';
    }
  } else {
    for (int i = 31; i >= 0; i--) {
      binario += ((x >> i) & 1LL) ? '1' : '0';
    }
  }
  cout << binario << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  long long x; cin >> x;

  toBinary(x, false);
  toBinary(x, true);
  toBinary(x << 1, false);
  toBinary(x >> 1, false);

  return 0;
}

// https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_10_A

/*

#include <bits/stdc++.h>
 
using namespace std;
 
void solve(){
	long long n; cin >> n;
	bitset<32> m(n);
	cout << m << '\n';
	cout << (m ^ bitset<32>((1LL << 32) - 1)) << '\n';
	cout << (m << 1) << '\n';
	cout << (m >> 1) << '\n';
}
 
int main(){
	ios::sync_with_stdio(0);
	int t = 1;
	// cin >> t;
	while(t--)
		solve();
}
*/