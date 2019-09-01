import java.util.Scanner;
import java.util.Vector;

public class aboveaverage {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int cases = cin.nextInt();

        do {
            Vector<Integer> grades = new Vector<Integer>();
            double average = 0.0f;
            int above = 0;

            // read in num integers
            int num = cin.nextInt();
            do {
                grades.add(cin.nextInt());
            } while (--num > 0);

            // find floating point average
            for (Integer x : grades)
                average += x;
            average /= (float) grades.size();

            // find number of grades above average
            for ( Integer x : grades )
                if ( x > average )
                    ++above;

            System.out.printf("%.3f%s \n", ( ( double ) above / grades.size() ) * 100.0, "%" );

        } while (--cases > 0);
    }
}