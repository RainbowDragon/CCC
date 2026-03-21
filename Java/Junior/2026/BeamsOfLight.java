/**
 *      CCC 2026 Junior - Beams of Light
 *
 */

import java.io.*;
import java.lang.*;
import java.util.*;

public class Main {

    public static void main (String [] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        int L = Integer.parseInt(br.readLine());
        int Q = Integer.parseInt(br.readLine());

        int[] diff = new int[N+2];

        for (int i = 0; i < L; i++)
        {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int P = Integer.parseInt(st.nextToken());
            int S = Integer.parseInt(st.nextToken());
            int lb = Math.max(1, P - S);
            int rb = Math.min(N, P + S);
            diff[lb] += 1;
            diff[rb+1] -= 1;
        }

        int[] parking = new int[N+1];
        parking[0] = 0;
        for (int i = 1; i <= N; i++)
        {
            parking[i] = parking[i-1] + diff[i];
        }

        for (int i = 0; i < Q; i++)
        {
            int pos = Integer.parseInt(br.readLine());
            if (1 <= pos && pos <= N && parking[pos] > 0) {
                System.out.println("Y");
            }
            else {
                System.out.println("N");
            }
        }
    }
}