#include <bits/stdc++.h>

#ifdef LOCAL
#include "../../../debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int N, M; cin >> N >> M; // cantidad de Nodos y Aristas
	vector<vector<int>> adj(N + 1); // lista de adyacencia
	
	for (int i = 0; i < M; i++) {
		int u, v; cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}

	vector<bool> used(N + 1);
	function<void(int)> dfs = [&](int u) {
		//cout << u << '\n';
		//dbg("Visitando: ", u);

		used[u] = true;
		for (int v : adj[u]) {
			if (used[v]) continue;
			dfs(v);
		}
	};

	vector<int> marked;
	for (int u = 1; u <= N; u++) {
		if (used[u]) continue;

		//dbg("Marcando: ", u);

		marked.push_back(u);
		dfs(u);
	}
	//dbg(marked);
	cout << (int) marked.size() - 1 << '\n';
	for (int i = 0; i < (int) marked.size() - 1; i++) {
		cout << marked[i] << ' ' << marked[i+1] << '\n';
	}
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
