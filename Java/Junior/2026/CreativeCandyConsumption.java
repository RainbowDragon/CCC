/**
 *      CCC 2026 Junior - Creative Candy Consumption
 *
 */

import java.io.*;
import java.lang.*;
import java.util.*;

public class Main {

    public static void main (String [] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String N = br.readLine();
        String M = br.readLine();

        int n = 0;
        int m = 0;

        int i = 0;
        int j = 0;

        while (i < N.length() && j < M.length())
        {
            if (N.charAt(i) == M.charAt(j)) {
                n++;
                m++;
                i++;
                j++;
            }
            else {
                String str = "" + N.charAt(i) + M.charAt(j);

                if (str.equals("RG") || str.equals("GB") || str.equals("BR")) {
                    n++;
                    j++;
                }
                else {
                    m++;
                    i++;
                }
            }
        }

        if (i < N.length()) {
            n += N.length() - i;
        }

        if (j < M.length()) {
            m += M.length() - j;
        }

        System.out.println(n);
        System.out.println(m);        
    }
}