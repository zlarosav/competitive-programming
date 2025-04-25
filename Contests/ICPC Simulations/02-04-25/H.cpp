#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
void solve()
{
    int n, c; cin >> n >> c;
    int a = INT_MIN;
    int b = INT_MIN;
    while(c--) {
        int r, w; cin >> r >> w;
        a = max(r, a);
        b = max(w, b);
    }
    if(a + b > n) {
        cout << "IMPOSSIBLE\n";
        return;
    }
    for(int i = 0; i < a; i++) {
        cout << "R";
    }
    for(int i = 0; i < b; i++) {
        cout << "W";
    }
    for (int i = 0; i < n - (a+b); i++) {
      cout << "W";
    }
    cout << "\n";
}
int main()
{
    cpu();
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}