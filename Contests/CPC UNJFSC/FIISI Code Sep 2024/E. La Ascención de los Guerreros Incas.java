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
    // leer el numero de rangos
    int n = scanner.nextInt();
    
    // leer los years necesarios para pasar de un rango a otro
    int[] need = new int[n];
    for (int i = 1; i < n; i++) {
      need[i] = scanner.nextInt();
    }

    // leer los rangos a y b
    int a = scanner.nextInt();
    int b = scanner.nextInt();

    // calcular los years necesarios para pasar del rango a al rango b
    int ans = 0;
    for (int i = a; i < b; i++) {
      ans += need[i];
    }

    // imprimir el resultado
    System.out.println(ans);
  }
}