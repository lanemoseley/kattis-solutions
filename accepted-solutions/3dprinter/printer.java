import java.util.Scanner;

public class printer {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        n = (int) (Math.ceil(Math.log(n)/Math.log(2)) + 1);
        System.out.println(n);
    }
}