

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int num = scanner.nextInt();

        for(int i=0; i<9; i++){
            System.out.println(num+" * "+ (i+1) + " = " + num*(i+1));
        }
    }
}
