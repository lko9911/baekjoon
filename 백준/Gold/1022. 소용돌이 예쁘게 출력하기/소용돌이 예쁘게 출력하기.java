import java.io.*;
import java.util.*;

public class Main {

    static long value(int r, int c) {
        int k = Math.max(Math.abs(r), Math.abs(c));
        long base = (long)(2 * k + 1) * (2 * k + 1);

        if (r == k) return base - (k - c);
        if (c == -k) return base - 2L * k - (k - r);
        if (r == -k) return base - 4L * k - (c + k);
        return base - 6L * k - (r + k);
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int r1 = Integer.parseInt(st.nextToken());
        int c1 = Integer.parseInt(st.nextToken());
        int r2 = Integer.parseInt(st.nextToken());
        int c2 = Integer.parseInt(st.nextToken());

        int rows = r2 - r1 + 1;
        int cols = c2 - c1 + 1;

        long[][] arr = new long[rows][cols];
        int width = 0;

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                arr[i][j] = value(r1 + i, c1 + j);
                width = Math.max(width, String.valueOf(arr[i][j]).length());
            }
        }

        StringBuilder sb = new StringBuilder();
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                sb.append(String.format("%" + width + "d", arr[i][j]));
                if (j < cols - 1) sb.append(" ");
            }
            sb.append("\n");
        }

        System.out.print(sb);
    }
}
