import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T = Integer.parseInt(br.readLine());

        StringBuilder sb = new StringBuilder();

        while (T-- > 0) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            long x = Long.parseLong(st.nextToken());
            long y = Long.parseLong(st.nextToken());

            long d = y - x;
            long n = (long) Math.sqrt(d);

            if (n * n == d) {
                sb.append(2 * n - 1);
            } else if (d <= n * (n + 1)) {
                sb.append(2 * n);
            } else {
                sb.append(2 * n + 1);
            }
            sb.append('\n');
        }

        System.out.print(sb.toString());
    }
}
