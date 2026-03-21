/**
 *      CCC 2026 Junior - Concert Tickets
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int B, T, P;
    cin >> B;
    cin >> T;
    cin >> P;

    int R = T - P;

    if (B > R)
    {
        cout << "N" << endl;
    }
    else 
    {
        cout << "Y " << R - B << endl;
    }

    return 0;
}
