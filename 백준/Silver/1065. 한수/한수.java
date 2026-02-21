import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int N = sc.nextInt();
        int count = 0;

        for (int i = 1; i <= N; i++) {
            if (i < 100) {
                count++; // 1~99는 모두 한수
            } else {
                int hundreds = i / 100;
                int tens = (i / 10) % 10;
                int ones = i % 10;
                if (tens - hundreds == ones - tens) {
                    count++;
                }
            }
        }

        System.out.println(count);
    }
}