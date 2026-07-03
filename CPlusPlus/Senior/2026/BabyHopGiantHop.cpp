/**
 *      CCC 2026 Senior - Baby Hop, Giant Hop
 *
 */

#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
    ll A, B, K;
    int T;
    cin >> A;
    cin >> B;
    cin >> K;
    cin >> T;

    ll distance = llabs(B - A);

    ll Q = distance / K;
    ll R = distance % K;
    ll s1 = Q + R;
    ll s2 = (Q + 1) + (K - R);

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
        ll min1 = min(s1, s2);
        ll min2 = max(s1, s2);
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
