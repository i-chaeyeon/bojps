

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int hour = scanner.nextInt();
        int min = scanner.nextInt();
        int add = scanner.nextInt();

        min += add;
        while(min>59){
            min -= 60;
            hour++;
        }
        while(hour>23){
            hour -= 24;
        }

        System.out.println(hour + " " + min);
    }
}
