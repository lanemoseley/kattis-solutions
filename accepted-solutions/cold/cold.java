import java.util.Scanner;

public class cold {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();
        int count = 0;

        do {
            int t = scan.nextInt();
            if (t < 0){
                ++count;
            }
        } while (--n != 0);

        System.out.println(count);
    }
}
