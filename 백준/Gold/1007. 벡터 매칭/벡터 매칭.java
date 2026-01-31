import java.io.*;
import java.util.*;

public class Main {

    static int N;
    static long[] x, y;
    static long totalX, totalY;
    static double answer;

    static void dfs(int idx, int cnt, long sx, long sy) {
        if (cnt == N / 2) {
            long vx = 2 * sx - totalX;
            long vy = 2 * sy - totalY;
            double len = Math.sqrt((double) vx * vx + (double) vy * vy);
            answer = Math.min(answer, len);
            return;
        }
        if (idx == N) return;
        if (cnt + (N - idx) < N / 2) return;

        // 선택
        dfs(idx + 1, cnt + 1, sx + x[idx], sy + y[idx]);
        // 미선택
        dfs(idx + 1, cnt, sx, sy);
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int T = Integer.parseInt(br.readLine());

        while (T-- > 0) {
            N = Integer.parseInt(br.readLine());
            x = new long[N];
            y = new long[N];

            totalX = 0;
            totalY = 0;

            for (int i = 0; i < N; i++) {
                st = new StringTokenizer(br.readLine());
                x[i] = Long.parseLong(st.nextToken());
                y[i] = Long.parseLong(st.nextToken());
                totalX += x[i];
                totalY += y[i];
            }

            answer = Double.MAX_VALUE;
            dfs(0, 0, 0, 0);

            System.out.printf("%.12f%n", answer);
        }
    }
}
