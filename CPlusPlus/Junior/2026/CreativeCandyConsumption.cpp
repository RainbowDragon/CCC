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

    while (i < N.length() && j < M.length())
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
            string str;
            str += N[i];
            str += M[j];

            if (str == "RG" || str == "GB" || str == "BR")
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

    if (i < N.length())
    {
        n += N.length() - i;
    }

    if (j < M.length())
    {
        m += M.length() - j;
    }

    cout << n << endl;
    cout << m << endl;

    return 0;
}
