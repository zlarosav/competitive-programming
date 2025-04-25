// Incluye la librería estándar de C++
#include <bits/stdc++.h> 

// Incluye la librería de contenedores asociativos Policy Based Data Structures (PBDS)
#include <ext/pb_ds/assoc_container.hpp>

// Incluye la librería de políticas de árboles de PBDS
#include <ext/pb_ds/tree_policy.hpp>

#ifdef LOCAL
#include "debug.cpp"
#else
#define debug(...)
#endif

// Macros para simplificar la escritura de código
using namespace std; // STD namespace
using namespace __gnu_pbds; // PBDS namespace
template <class T> using ordered_set = tree<T, null_type, less_equal<T>, 
rb_tree_tag, tree_order_statistics_node_update>; // Alias para el ordenamiento del árbol

#define pb push_back // Añade un elemento al final de un vector, deque, y otros STL.
#define sz(a) ((int)((a).size())) // Devuelve el tamaño de un contenedor.
#define ff first // 1er elemento de un std::pair o la clave/key en un std::map.
#define ss second // 2do elemento de un std::pair o el valor en un std::map.
#define all(a) (a).begin(), (a).end() // Itera sobre todos los elementos de un contenedor.
#define allr(a) (a).rbegin(), (a).rend() // Itera sobre todos los elementos de un contenedor en reversa.
#define approx(a) fixed << setprecision(a) // Devuelve un número flotante con "a" decimales.

template <class T> using pq = priority_queue<T>; // set alias for priority_queue
template <class T> using pqg = priority_queue<T, vector<T>, greater<T>>; // set alias for priority_queue with greater
template <class T> void ckmin(T &a, const T &b) { a = min(a, b); } //check minimun netween two values
template <class T> void ckmax(T &a, const T &b) { a = max(a, b); } //check maximum between two values

// Read functions con sobrecarga de operadores
// - Declare functions to read different types of data
template <class T> void read(vector<T> &v); // declare read for vector
template <class F, class S> void read(pair<F, S> &p); // declare read for pair
template <class T, size_t Z> void read(array<T, Z> &a); // declare read for array
// - Define read functions
template <class T> void read(T &x) { cin >> x; } // read a single value (doesn't need prior explicit declaration)
template <class R, class... T> void read(R &r, T &...t) { read(r); read(t...); } // read multiple values (doesn't need prior explicit declaration)
template <class T> void read(vector<T> &v) { for(auto &x : v) read(x); } // read a vector (needs to declarate template function for vector)
template <class F, class S> void read(pair<F, S> &p) { read(p.ff, p.ss); } // read a pair (needs to declarate template function for pair)
template <class T, size_t Z> void read(array<T, Z> &a) { for(auto &x : a) read(x); } // read an array (needs to declarate template function for array)

// Print functions con sobrecarga de operadores
// - Declare functions to print different types of data
template <class F, class S> void pr(const pair<F, S> &x); // declare print for pair
// - Define print functions
template <class T> void pr(const T &x) { cout << x; } // print a single value (doesn't need prior explicit declaration)
template <class R, class... T> void pr(const R &r, const T &...t) { pr(r); pr(t...); } // print multiple values (doesn't need prior explicit declaration)
template <class F, class S> void pr(const pair<F, S> &x) { pr("{ ", x.ff, ", ", x.ss, " }\n"); } // print a pair (needs to declarate template function for pair)
// - Print functions (pr) with newline 
void ps() { pr("\n"); } // (Declare and define) // print newline
template <class T> void ps(const T &x) { pr(x); ps(); } // print a single value followed by newline (doesn't need prior explicit declaration)
template <class R, class... T> void ps(const R &r, const T &...t) { pr(r, ' '); ps(t...); } // print multiple values followed by newline (doesn't need prior explicit declaration)
template <class T> void ps(const vector<T> &v) { for(auto &x : v) pr(x, ' '); ps(); } // print vector elements followed by newline (doesn't need prior explicit declaration)
template <class T, size_t Z> void ps(const array<T, Z> &a) { for(auto &x : a) pr(x, ' '); ps(); } // print array elements followed by newline (doesn't need prior explicit declaration)
template <class F, class S> void ps(const pair<F, S> &x) { pr(x.ff, ' ', x.ss); ps(); } // print pair elements followed by newline (needs to declarate template function for pair)