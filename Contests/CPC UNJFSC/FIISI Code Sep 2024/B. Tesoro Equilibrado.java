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
    // aqui va tu codigo 
    String num = scanner.nextLine(); 
      int firstA = 0;
      int firstB = 0;
      for (int j=0;j<3; j++) {
        firstA += num.charAt(j)-'0';
      }
      for (int j=3;j <num.length();j++) {
        firstB += num.charAt(j)-'0';
      }
      if (firstA==firstB) {
        System.out.println("YES");
      } else {
        System.out.println("NO");
      }
  }
}