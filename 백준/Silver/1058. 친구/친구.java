import java.io.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());

        char[][] F = new char[N][N];
        for (int i = 0; i < N; i++) {
            F[i] = br.readLine().toCharArray();
        }

        int answer = 0;

        for (int i = 0; i < N; i++) {
            boolean[] isFriend = new boolean[N];

            for (int j = 0; j < N; j++) {
                if (i == j) continue;

                if (F[i][j] == 'Y') {
                    isFriend[j] = true;
                } else {
                    for (int k = 0; k < N; k++) {
                        if (F[i][k] == 'Y' && F[k][j] == 'Y') {
                            isFriend[j] = true;
                            break;
                        }
                    }
                }
            }

            int cnt = 0;
            for (boolean v : isFriend) if (v) cnt++;
            answer = Math.max(answer, cnt);
        }

        System.out.println(answer);
    }
}
