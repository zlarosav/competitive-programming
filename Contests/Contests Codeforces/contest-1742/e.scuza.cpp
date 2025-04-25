#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;
    vector<int> heights(n);
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    vector<long long> prefixSum(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        prefixSum[i] = prefixSum[i - 1] + heights[i - 1];
    }

    vector<long long> questions(q);
    for (int i = 0; i < q; i++) {
        cin >> questions[i];
    }

    for (long long k : questions) {
        long long maxHeight = 0;
        int idx = upper_bound(heights.begin(), heights.end(), k) - heights.begin();
        cout << idx << " ";
        maxHeight = prefixSum[idx];
        /* if (idx > 0) {
            maxHeight -= prefixSum[idx - 1];
        } */
        cout << maxHeight << " ";
    }
    cout << "\n";
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

// https://codeforces.com/problemset/problem/1742/E