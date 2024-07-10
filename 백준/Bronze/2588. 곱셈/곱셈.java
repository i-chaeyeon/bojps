

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int A = scanner.nextInt();
        int B = scanner.nextInt(); //385

        int result = A*B;

        System.out.println(A*(B%10));
        B /= 10; //38
        System.out.println(A*(B%10));
        B /= 10; //3
        System.out.println(A*B);
        System.out.println(result);

    }
}
