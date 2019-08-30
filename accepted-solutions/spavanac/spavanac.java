import java.util.Scanner;

public class spavanac {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int hours = scan.nextInt();
        int min = scan.nextInt() - 45;

        if (min < 0) {
            if (hours == 0) {
                hours = 23;
            }
            else {
                --hours;
            }

            min += 60;
        }

        System.out.println(hours + " " + min);
    }
}
