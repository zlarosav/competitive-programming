#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> st;
    for (int i = 0; i < n; i++)
    {
      int x; cin >> x;
      st.insert(x);
    }

    vector<int> arr(st.begin(), st.end());
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }
    int cnt = 1;
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int maxE = 1;
        int j = i + 1;
        while (j < arr.size() && arr[j] - arr[i] == 1)
        {
            maxE++;
            i++;
            j++;
        }
        if(maxE > cnt) {
            cnt = maxE;
        }
    }
    cout << cnt;
}