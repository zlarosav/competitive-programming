#include <bits/stdc++.h>
using namespace std;

void solve() {
  string a, b; getline(cin, a); getline(cin, b);
  unordered_set<char> s;
  for (char& c : a) {
    s.insert(c);
    if (isupper(c)) s.insert(tolower(c));
    else s.insert(toupper(c));
  }
  
  string result = "";
  for (char& c : b) {
    if ((result.empty() || result.back() == ' ') && c == ' ') continue;
    if (s.count(c) == 0) result += c;
  }
  cout << result << '\n';
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	cin.ignore();
	while (t--) {
		solve();
	}

	return 0;
}

// https://blitzcoding.com/problem-detail/14