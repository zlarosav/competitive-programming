#include <bits/stdc++.h>
#include <cerrno>
#include <climits>
#define min(a, b) ((a) > (b) ? (b) : (a))
#define max(a, b) ((a) > (b) ? (a) : (b))
#define min3(a, b, c) (min(min(a, b), c))
#define max3(a, b, c) (max(max(a, b), c))
#define swap(a, b) { auto temp = a; a = b; b = temp; }
 
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<string> vs;
typedef vector<char> vc;
void solve()
{
  int n; cin>>n;
  vector<ll> a((3*n));
  vector<pair<ll,ll>> rounds;
  for(int i=0;i<(3*n);i++){
    cin>>a[i];
  }
  sort(a.begin(), a.end());
  for(int i=0;i<(n);i++){
    ll mx = LONG_MIN;
    ll mn = LONG_MAX;
    for(int j=0;j<3;j++){
      if(a[3*i+j]>mx){
        mx = a[3*i+j];
      }
      if(a[3*i+j]<mn){
        mn = a[3*i+j];
      }
    }
    rounds.push_back({mx,mn});
  }
  ll q= 0,p= 0;
  for(auto x : rounds){
    q+=x.first;
    p+=x.second;
  }
  if(q==p)cout<<"N";
  else cout<<"Y";
 
}
 
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    //cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}

// https://codeforces.com/gym/104736/problem/B