#include <bits/stdc++.h>
#define cpu() ios::sync_with_stdio(false);cin.tie(nullptr);
using namespace std;
typedef long long ll;
const ll mod = 1e9+7;
void solve()
{
    ll d, r, t; cin >> d >> r >> t;
    ll ageR = 4, ageT = 4 - d;
    ll c1 = 0, c2 = 0;
    while(ageR < 1000 && ageT < 1000 && c1 + c2 != r + t) {
        if(ageR >= 4) {
            c1 += ageR;
        }
        if(ageT >= 3) {
            c2 += ageT;
        }
        ageR++;
        ageT++;
    }
    //cout << ageR << ' ' << ageT;
    cout << r - c1 << '\n';
}
int main()
{
    cpu();
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}