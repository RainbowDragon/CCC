/**
 *      CCC 2026 Junior - Creative Candy Consumption
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    string N, M;
    cin >> N;
    cin >> M;

    int n = 0;
    int m = 0;

    int i = 0; 
    int j = 0;

    int lenN = N.length();
    int lenM = M.length();

    while (i < lenN && j < lenM)
    {
        if (N[i] == M[j]) 
        {
            n++;
            m++;
            i++;
            j++;
        }
        else 
        {
            if ((N[i] == 'R' && M[j] == 'G') || (N[i] == 'G' && M[j] == 'B') || (N[i] == 'B' && M[j] == 'R'))
            {
                n++;
                j++;
            }
            else
            {
                m++;
                i++;
            }
        }
    }

    if (i < lenN)
    {
        n += lenN - i;
    }

    if (j < lenM)
    {
        m += lenM - j;
    }

    cout << n << endl;
    cout << m << endl;

    return 0;
}
