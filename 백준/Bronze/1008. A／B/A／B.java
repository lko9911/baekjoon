import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        // 두 정수 A와 B를 입력받습니다. (입력은 정수 형태입니다)
        // A와 B의 범위가 int에 들어간다고 가정합니다.
        int A = scanner.nextInt(); 
        int B = scanner.nextInt(); 
        
        // 1. 실수 나눗셈 수행:
        // A를 double 타입으로 명시적으로 형 변환(Casting)합니다.
        // 이로 인해 연산 전체가 실수 연산으로 바뀌어 정확한 소수점 결과를 얻게 됩니다.
        double result = (double)A / B; 
        
        // 2. 결과 출력:
        // double 타입의 변수를 출력하면 Java는 기본적으로 필요한 모든 자릿수를 출력합니다.
        // 출력값의 절대/상대 오차가 10^-9 이하인 조건을 만족시키기 위해
        // System.out.println()을 사용하여 double 변수를 그대로 출력합니다.
        System.out.println(result);
        
        scanner.close();
    }
}