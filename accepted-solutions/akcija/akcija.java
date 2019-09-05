import java.util.ArrayList;
import java.util.Collections;
import java.util.Scanner;

public class akcija {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);

        int n = cin.nextInt();
        ArrayList<Integer> prices = new ArrayList<>(n);
        int sum = 0;

        for (int i = 0; i < n; ++i) {
            int temp = cin.nextInt();

            // get the total price of all books
            sum += temp;
            prices.add(temp);
        }

        // sort in ascending order
        Collections.sort(prices);

        // any group of less than three books will consist of the cheapest books
        int i = 0;
        while ((prices.size() - i) % 3 != 0) {
            ++i;
        }

        // subtract the price of the discounted books
        for (int j = i; j < prices.size(); j += 3) {
            sum -= prices.get(j);
        }

        System.out.println(sum);
    }
}
