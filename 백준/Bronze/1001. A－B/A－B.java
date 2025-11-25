import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // 1. Scanner 객체 생성: 표준 입력(System.in)을 통해 사용자 입력을 받습니다.
        Scanner scanner = new Scanner(System.in);
        
        // 2. 두 정수 A와 B를 순서대로 입력받아 저장합니다.
        int A = scanner.nextInt(); 
        int B = scanner.nextInt(); 
        
        // 3. A와 B의 합을 계산하고 출력합니다.
        int sum = A - B;
        System.out.println(sum);
        
        // 4. Scanner 객체를 닫아 자원을 해제합니다. (선택 사항이지만 권장됩니다.)
        scanner.close();
    }
}