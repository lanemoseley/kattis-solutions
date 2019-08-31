import java.util.Scanner;

public class oddities {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int num = scan.nextInt();

        do {
            int x = scan.nextInt();

            if ( ( x & 1 ) != 0 ) {
                System.out.println(x + " is odd");
            }
            else {
                System.out.println(x + " is even");
            }
        } while (--num > 0);
    }
}
