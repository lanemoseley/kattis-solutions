import java.util.Scanner;

public class anothercandies {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);

        int testCases = cin.nextInt();

        do {
            int numStudents = cin.nextInt();

            long sum = 0;
            for (int i = 0; i < numStudents; ++i) {
                Long ltemp = Long.parseUnsignedLong(cin.next());
                sum += ltemp % numStudents;
            }

            String result = (sum % numStudents == 0) ? "YES" : "NO";
            System.out.println(result);

        } while (--testCases > 0);
    }
}
