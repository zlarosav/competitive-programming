#include <bits/stdc++.h>

using namespace std;

vector<string> read(string line) {
  vector<string> v; string item;
  stringstream ss(line.substr(1, line.size()-2));

  while(getline(ss, item, ',')) {
    if (item[0] == ' ') {
      v.push_back(item.substr(2, item.size()-3));
    } else {
      v.push_back(item.substr(1, item.size()-2));
    }
  }

  return v;
}

void solve() {
  vector<string> vA, vB, answer;
  string lineA, lineB; getline(cin, lineA); getline(cin, lineB);
  vA = read(lineA);
  vB = read(lineB);

  map<string, int> mp;
  for (string s : vB) {
    mp[s] += 1;
  }
  for (string s : vA) {
    if (mp.count(s) == 1) {
      answer.push_back(s);
    }
  }
  
  cout << "[";
  for (int i = 0; i < answer.size(); ++i) {
    if (i > 0) cout << ", ";
    cout << "'" << answer[i] << "'";
  }
  cout << "]" << endl;
}

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t = 1; 
  cin >> t;
  cin.ignore();
  while(t--) {
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/8