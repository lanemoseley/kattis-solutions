import java.util.Scanner;

public class timeloop {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int n = cin.nextInt();

        for (int i = 0; i < n; ++i) {
            System.out.println((i + 1) + " Abracadabra");
        }
    }
}
