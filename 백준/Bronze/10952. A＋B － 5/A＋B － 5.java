

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        while(true){
            int A = scanner.nextInt();
            int B = scanner.nextInt();

            int result = A+B;
            if(result == 0){
                break;
            } else {
                System.out.println(result);
            }
        }
    }
}
