#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> tree[n + 1];
    vector<int> parent(n + 1, -1);

    // Step 1: Find the parent for each node using the query
    for (int i = 2; i <= n; ++i) {
        cout << "? " << 1 << " " << i << endl;
        cout.flush();

        int response;
        cin >> response;

        if (response == 1) {
            tree[1].push_back(i);
            parent[i] = 1;
        } else {
            tree[response].push_back(i);
            parent[i] = response;
        }

        // Adding an extra new line after each query to match the required format
        cout << endl;
    }

    // Step 2: Output the tree structure
    cout << "! ";
    for (int i = 2; i <= n; ++i) {
        cout << parent[i] << " " << i << " ";
    }
    cout << endl;
    cout.flush();
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
