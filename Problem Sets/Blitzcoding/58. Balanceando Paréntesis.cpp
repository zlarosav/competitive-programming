#include <bits/stdc++.h>

using namespace std;

void solve() {
  // Obtenemos la cadena
  string cadena; cin >> cadena;

  // Creamos un vector que utilizaremos para analizar la cadena
  vector<char> cadenaVerificada;
  for (int i = 0; i < cadena.size(); i++) {
    // Declaramos la variable "c" como el paréntesis analizado
    char c = cadena[i];

    // Si el paréntesis es abierto, entonces lo empujamos al final del vector
    if (c == '{' || c == '[' || c == '(') {
      cadenaVerificada.push_back(c);
    } else {
      // Verificamos si la cadena está vacía, si se cierra una cadena sin paréntesis
      // abiertos entonces inmediatamente sabemos que "NO" está balanceada
      if (cadenaVerificada.empty()) {
        cout << "NO" << endl; 
        return;
      }

      // Si el paréntesis de cierre coincide con el tipo de paréntesis de apertura
      // entonces borramos el paréntesis de apertura que debe estar al final del vector
      if (c == '}' && cadenaVerificada.back() == '{') {
        cadenaVerificada.pop_back();

      } else if (c == ']' && cadenaVerificada.back() == '[') {
        cadenaVerificada.pop_back();

      } else if (c == ')' && cadenaVerificada.back() == '(') {
        cadenaVerificada.pop_back();

      } else {
        // Si no se cumple lo anterior, entonces "NO" está balanceada
        cout << "NO" << endl; 
        return;
      }
    }
  }

  // Si el vector está vacío al final es porque se borró tantos paréntesis como se añadió
  // Paréntesis de apertura - paréntesis de cierre = 0
  if (cadenaVerificada.empty()) {
    cout << "SI" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  // Obtenemos el número de casos de la 1era línea de entrada
  int casos; cin >> casos;
  
  while (casos--) {
    // Evaluamos cada caso en una función "solve"
    solve();
  }

  return 0;
}

// https://blitzcoding.com/problem-detail/58