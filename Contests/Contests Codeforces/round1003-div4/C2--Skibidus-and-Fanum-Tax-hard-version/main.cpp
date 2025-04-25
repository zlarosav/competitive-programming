#include <bits/stdc++.h>
#include <vector>

#ifdef LOCAL
#include "debug.cpp"
#else
#define dbg(...)
#endif

using namespace std;

void solve() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for (int& i : a) cin >> i;
    for (int& i : b) cin >> i;

    sort(b.begin(), b.end());
    
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1; 
    cin >> t;
    //cin.ignore();
    while (t--) {
        solve();
    }

    return 0;
}
