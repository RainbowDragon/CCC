/**
 *      CCC 2026 Junior - Olympic Scores
 *
 */

import java.io.*;
import java.lang.*;
import java.util.*;

public class Main {

    public static void main (String [] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int[] scores = new int[5];
        for (int i = 0; i < 5; i++) 
        {
            scores[i] = Integer.parseInt(br.readLine());
        }
        
        int D = Integer.parseInt(br.readLine());

        Arrays.sort(scores);

        int result = 0;
        for (int i = 1; i <= 3; i++) 
        {
            result += scores[i];
        }

        result *= D;

        System.out.println(result);   
    }
}