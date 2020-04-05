import java.util.Scanner;

public class scanner{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String Scanned = sc.next();
        int x = Integer.parseInt(Scanned);
        System.out.println("valor de x: " + x);
    }
}
