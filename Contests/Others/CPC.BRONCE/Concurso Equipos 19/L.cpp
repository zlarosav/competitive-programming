#include <bits/stdc++.h>
#include <vector>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int r, c, n, p; cin >> r >> c >> n >> p;
	vector<vector<int>> v(r, vector<int>(c));
	pair<int, int> init;
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			int x; cin >> x;
			v[i][j] = x;
			if (x == p) init = {i, j}; 
		}
	}
	vector<vector<pair<int, int>>> movs(r, vector<pair<int, int>>(c));
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (v[i][j] == 1) movs[i][j] = {0, 0};
			else if (i > 0 && v[i][j] - 1 == v[i-1][j]) movs[i][j] = {-1, 0};
			else if (r > i + 1 && v[i][j] - 1 == v[i+1][j]) movs[i][j] = {1, 0};
			else if (j > 0 && v[i][j] - 1 == v[i][j-1]) movs[i][j] = {0, -1};
			else if (c > j + 1 && v[i][j] - 1 == v[i][j+1]) movs[i][j] = {0, 1};
		}
	}
	set<int> vecinos;
	for (int turno = 0; turno < p; turno++) {
		int x = init.first, y = init.second;
		init = {x + movs[x][y].first, y + movs[x][y].second};
		
		if (x > 0 && n >= v[x-1][y] + turno && v[x-1][y] > 0) {
			vecinos.insert(v[x-1][y] + turno);
		}
		if (r > x + 1 && n >= v[x+1][y] + turno && v[x+1][y] > 0) {
			vecinos.insert(v[x+1][y] + turno);
		}
		if (y > 0 && n >= v[x][y-1] + turno && v[x][y-1] > 0) {
			vecinos.insert(v[x][y-1] + turno);
		}

		if (c > y + 1 && n >= v[x][y+1] + turno && v[x][y+1] > 0) {
			vecinos.insert(v[x][y+1] + turno);
		}
	}
	cout << vecinos.size() << '/' << n-1;
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t = 1; 
	//cin >> t;
	//cin.ignore();
	while (t--) {
		solve();
	}

	return 0;
}
