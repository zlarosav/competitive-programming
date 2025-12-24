#include <bits/stdc++.h>
using namespace std;

int main() {
	int casos; cin >> casos;
	while (casos--) {
	  string cadena; cin >> cadena;
    stack<char> s;
    for (char& p : cadena) {
      if (p == '{' || p == '(' || p == '[') {
        s.push(p);
      } else {
        if (s.empty()) {
          cout << "NO" << endl;
          return 0;
        }

        char ultimo = s.top();
        if ((p == '}' && ultimo == '{') || (p == ']' && ultimo == '[') || (p == ')' && ultimo == '(')) {
          s.pop();
        }
      }
    }

    if (s.empty()) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
	}

  return 0;
}
