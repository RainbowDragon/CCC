/**
 *      CCC 2026 Junior - Concert Tickets
 *
 */

import java.io.*;
import java.lang.*;
import java.util.*;

public class Main {

    public static void main (String [] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int B = Integer.parseInt(br.readLine());
        int T = Integer.parseInt(br.readLine());
        int P = Integer.parseInt(br.readLine());

        int R = T - P;

        if (B > R) {
            System.out.println("N");
        }
        else {
            System.out.println("Y " + (R - B));
        }
    }
}