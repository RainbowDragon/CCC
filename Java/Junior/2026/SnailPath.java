/**
 *      CCC 2026 Junior - Snail Path
 *
 */

import java.io.*;
import java.lang.*;
import java.util.*;

public class Main {

    public static void main (String [] args) throws Exception {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int M = Integer.parseInt(br.readLine());

        HashSet<String> set = new HashSet<>();
        int x = 0;
        int y = 0;
        set.add(encode(x, y));

        int count = 0;

        for (int i = 0; i < M; i++)
        {
            int dx = 0;
            int dy = 0;
        
            String str = br.readLine();
            char direction = str.charAt(0);
            int distance = Integer.parseInt(str.substring(1));

            if (direction == 'N')   {
                dy = 1;
            }
            else if (direction == 'S') {
                dy = -1;
            }
            else if (direction == 'E') {
                dx = 1;
            }
            else {
                dx = -1;
            }

            for (int j = 0; j < distance; j++)
            {
                x += dx;
                y += dy;
                if (set.contains(encode(x, y)))
                {
                    count++;
                }
                else
                {
                    set.add(encode(x,y));
                }
            }
        }

        System.out.println(count);
    }

    static String encode (int x, int y) {
        return "" + x + " " + y; 
    }
}