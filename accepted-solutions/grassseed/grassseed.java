import java.text.DecimalFormat;
import java.util.Scanner;

public class grassseed {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);

        double costPerUnit = cin.nextDouble();
        int numLawns = cin.nextInt();
        double totalCost = 0.0;

        for (int i = 0; i < numLawns; ++i) {
            double w = cin.nextDouble();
            double l = cin.nextDouble();
            totalCost += w * l * costPerUnit;
        }

        DecimalFormat formatter = new DecimalFormat("0.0000000");
        System.out.println(formatter.format(totalCost));
    }
}
