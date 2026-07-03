/**
 *      CCC 2026 Junior - Beams of Light
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int N, L, Q;
    cin >> N;
    cin >> L;
    cin >> Q;

    vector<int> diff(N + 2, 0);
    for (int i = 0; i < L; i++)
    {
        int P, S;
        cin >> P >> S;
        int lb = max(1, P - S);
        int rb = min(N, P + S);
        diff[lb] += 1;
        diff[rb+1] -= 1;
    }

    vector<int> parking(N + 1, 0);
    for (int i = 1; i <= N; i++)
    {
        parking[i] = parking[i-1] + diff[i];
    }

    for (int i = 0; i < Q; i++)
    {
        int pos;
        cin >> pos;
        if (1 <= pos && pos <= N && parking[pos] > 0)
        {
            cout << "Y" << endl;
        }
        else 
        {
            cout << "N" << endl;
        }
    }

    return 0;
}
