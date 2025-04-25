#include <bits/stdc++.h>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	for (int &v : a) cin >> v;

	// Casos base: Si ya es x, terminamos
	if (n == 1) {
		cout << (a[0] == x ? "YES\n" : "NO\n");
		return;
	}

	// Usamos un conjunto para guardar los posibles valores obtenidos
	set<double> possible_values(a.begin(), a.end());

	// Intentamos dividir el arreglo en subsecuencias válidas
	while (possible_values.size() > 1) {
		vector<double> new_values;
		bool found = false;

		// Probar todos los k que dividen n
		for (int k = 2; k <= possible_values.size(); ++k) {
			if (possible_values.size() % k == 0) {
				vector<double> temp(possible_values.begin(), possible_values.end());
				vector<double> avg;
				
				// Agrupar elementos en k partes y calcular su promedio
				for (int i = 0; i < (int)temp.size(); i += temp.size() / k) {
					double sum = 0;
					for (int j = i; j < i + temp.size() / k; ++j) {
						sum += temp[j];
					}
					avg.push_back(sum / (temp.size() / k));
				}

				// Verificar si x está entre los valores promediados
				set<double> avg_set(avg.begin(), avg.end());
				if (avg_set.count(x)) {
					cout << "YES\n";
					return;
				}
				new_values = avg;
				found = true;
				break;
			}
		}

		// Si no encontramos forma de reducirlo más, salimos
		if (!found) break;
		possible_values = set<double>(new_values.begin(), new_values.end());
	}

	cout << "NO\n";
}

int main() {
	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}

