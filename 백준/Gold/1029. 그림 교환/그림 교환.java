import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        int[][] price = new int[N][N];
        for (int i = 0; i < N; i++) {
            String s = br.readLine();
            for (int j = 0; j < N; j++) {
                price[i][j] = s.charAt(j) - '0';
            }
        }

        final int INF = 10;
        int MAX_MASK = 1 << N;

        int[][] dp = new int[MAX_MASK][N];
        for (int i = 0; i < MAX_MASK; i++) {
            Arrays.fill(dp[i], INF);
        }

        // 시작 상태
        dp[1][0] = 0;

        for (int mask = 0; mask < MAX_MASK; mask++) {
            for (int last = 0; last < N; last++) {
                if (dp[mask][last] == INF) continue;

                int curPrice = dp[mask][last];

                for (int nxt = 0; nxt < N; nxt++) {
                    if ((mask & (1 << nxt)) != 0) continue;

                    if (price[last][nxt] >= curPrice) {
                        int newMask = mask | (1 << nxt);
                        dp[newMask][nxt] = Math.min(dp[newMask][nxt],
                                                    price[last][nxt]);
                    }
                }
            }
        }

        int ans = 0;
        for (int mask = 0; mask < MAX_MASK; mask++) {
            for (int last = 0; last < N; last++) {
                if (dp[mask][last] != INF) {
                    ans = Math.max(ans, Integer.bitCount(mask));
                }
            }
        }

        System.out.println(ans);
    }
}
