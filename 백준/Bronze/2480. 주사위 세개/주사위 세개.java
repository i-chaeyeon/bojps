

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int A = scanner.nextInt();
        int B = scanner.nextInt();
        int C = scanner.nextInt();

        int sameCnt = 0;
        int same = 0;

        if(A==B) {
            sameCnt++;
            same = A;
        }
        if(B==C) {
            sameCnt++;
            same = B;
        }
        if(C==A) {
            sameCnt++;
            same = C;
        }

        if(sameCnt== 3){
            System.out.println(10000+1000*same);
        } else if (sameCnt == 1){
            System.out.println(1000+100*same);
        } else {
            int max = A;
            if(max<B){
                max = B;
            }
            if(max<C){
                max = C;
            }
            System.out.println(100*max);
        }
    }
}
