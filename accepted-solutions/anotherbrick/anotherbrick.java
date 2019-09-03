import java.util.Scanner;

public class anotherbrick {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);

        int height = cin.nextInt();
        int width = cin.nextInt();
        int numBricks = cin.nextInt();
        int currentWidth = 0;
        String answer = "";

        do {
            currentWidth += cin.nextInt();
            if (currentWidth == width) {
                --height;
                currentWidth = 0;
            }
            else if (currentWidth > width) {
                answer = "NO";
            }
            if (height == 0) {
                answer = "YES";
            }
        } while (answer.isEmpty() && --numBricks > 0);

        if (answer.isEmpty()) {
            answer = "NO";
        }
        System.out.println(answer);
    }
}
