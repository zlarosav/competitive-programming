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
    // leer el numero inicial
    int numero = scanner.nextInt();
    numero++; // incrementar para buscar el siguiente numero curioso
    
    while (true) {
      String num = Integer.toString(numero);
      Set<Character> digitos = new HashSet<>();
      boolean esCurioso = true;

      // Verificar si los digitos son distintos
      for (int i = 0; i < num.length(); i++) {
        if (digitos.contains(num.charAt(i))) {
          esCurioso = false;
          break;
        }
        digitos.add(num.charAt(i));
      }

      // Si es curioso, imprimir el numero y salir del bucle
      if (esCurioso) {
        System.out.println(num);
        return;
      }

      numero++; // incrementar el numero para continuar buscando
    }
  }
}
