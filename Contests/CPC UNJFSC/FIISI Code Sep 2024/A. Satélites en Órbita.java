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
    // leer la cadena de caracteres
    String cadena = scanner.nextLine();
    int counter = 0;

    // contar las ocurrencias de 'O'
    for (int i = 0; i < cadena.length(); i++) {
      if (cadena.charAt(i) == 'O') {
        counter++;
      }
    }

    System.out.println(counter);
  }
}