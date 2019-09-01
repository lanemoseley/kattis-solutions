import java.util.Scanner;

public class fizzbuzz {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int x = cin.nextInt();
        int y = cin.nextInt();
        int n = cin.nextInt();

        for (int i = 1; i <= n; ++i) {
            if (i % x == 0) {
                if (i % y == 0) {
                    System.out.println("Fizzbuzz");
                }
                else {
                    System.out.println("Fizz");
                }
            }

            else if (i % y == 0) {
                System.out.println("Buzz");
            }

            else {
                System.out.println(i);
            }
        }
    }
}
