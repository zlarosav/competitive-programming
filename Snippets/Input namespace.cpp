#include <bits/stdc++.h>

using namespace std;

namespace Input{
  vector<string> readArrayString(string S){
    string comilla = "'";
    int n = S.size();
    vector<string> s;
    for(int i = 0; i < n; i++){
      if(S[i] == comilla[0]){
        i++;
        int j = i;
        while(j < n && S[j] != comilla[0]) j++;
        j--;
        s.push_back(S.substr(i, j - i + 1));
        i = j + 1;
      }
    }
    return s;
  }

  vector<int> readArrayInt(string S){
    int n = S.size();
    vector<int> a;
    for(int i = 0; i < n; i++){
      if(S[i] >= '0' && S[i] <= '9'){
        int j = i;
        while(j < n && S[j] >= '0' && S[j] <= '9') j++;
        j--;
        a.push_back(stoi(S.substr(i, j - i + 1)));
        i = j;
      }
    }
    return a;
  }

  vector<long long> readArrayLong(string S){
    int n = S.size();
    vector<long long> a;
    for(int i = 0; i < n; i++){
      if(S[i] >= '0' && S[i] <= '9'){
        int j = i;
        while(j < n && S[j] >= '0' && S[j] <= '9') j++;
        j--;
        a.push_back(stoll(S.substr(i, j - i + 1)));
        i = j;
      }
    }
    return a;
  }
}