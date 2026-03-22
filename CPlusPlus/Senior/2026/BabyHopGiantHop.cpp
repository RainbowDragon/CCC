/**
 *      CCC 2026 Senior - Baby Hop, Giant Hop
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long A, B, K;
    int T;
    cin >> A;
    cin >> B;
    cin >> K;
    cin >> T;

    long long distance = llabs(B - A);

    long long Q = distance / K;
    long long R = distance % K;
    long long s1 = Q + R;
    long long s2 = (Q + 1) + (K - R);

    if (distance == 0)
    {
        if (T == 1)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    else
    {
        long long min1 = min(s1, s2);
        long long min2 = max(s1, s2);
        if (T == 1)
        {
            cout << min1 << endl;
        }
        else
        {
            if (min1 != min2)
            {
                cout << min({min2, min1+2, min1+K-1}) << endl;
            }
            else
            {
                cout << min(min1+2, min1+K-1) << endl;
            }
        }
    }

    return 0;
}
