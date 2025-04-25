#include <iostream>
using namespace std;

int main() {
  int casos;
  cin >> casos;
  
  while (casos--) {
    int numero;
    cin >> numero;
    
    if (numero > 2 && numero % 2 == 0){
      cout << "YES" << endl;
    } else{
      cout << "NO" << endl;
    }	
  }

	return 0;
}

// https://blitzcoding.com/problem-detail/17