import java.util.Scanner;

public class aaah {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);

        String jon = cin.nextLine();
        String doctor = cin.nextLine();

        System.out.println(jon.length() >= doctor.length() ? "go" : "no");
    }
}
