import java.util.*;

public class Main {
  public static void main(String[] args) {
    Scanner scanner = new Scanner(System.in);
    // leer numero de casos
    int t = scanner.nextInt();
    scanner.nextLine();
    
    for (int i = 0; i < t; i++) {
      solve(scanner);
    }
    
    scanner.close();
  }

  private static void solve(Scanner scanner) {
    // leer la longitud del terreno
    int n = scanner.nextInt();
    scanner.nextLine(); // consumir la linea restante
    String terreno = scanner.nextLine();

    int unosMax = 0;
    int unos = 0;

    // recorrer el terreno para encontrar la secuencia mas larga de 1s
    for (int i = 0; i < n; i++) {
      if (terreno.charAt(i) == '1') {
        unos++;
      } else {
        unosMax = Math.max(unos, unosMax);
        unos = 0;
      }
    }

    // verificar si el ultimo tramo de 1s es el mas largo
    unosMax = Math.max(unos, unosMax);
    System.out.println(unosMax);
  }
}