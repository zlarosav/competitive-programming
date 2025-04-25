#include <bits/stdc++.h>

using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  string entrada;
  while (cin >> entrada) {
    int current_personas = 0;
    int max_personas = 0;
    
    for (char evento : entrada) {
      if (evento == '+') {
        current_personas++;
        if (current_personas > max_personas) {
          max_personas = current_personas;
        }
      } else if (evento == '-') {
        if (current_personas > 0) {
          current_personas--;
        } else {
          max_personas++;
        }
      }
    }
    
    cout << max_personas << endl;
  }
  
  return 0;
}