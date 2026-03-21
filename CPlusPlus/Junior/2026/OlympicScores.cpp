/**
 *      CCC 2026 Junior - Olympic Scores
 *
 */

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int scores[5];
    int D;
    for (int i = 0; i < 5; i++)
    {
        cin >> scores[i];
    }
    cin >> D;

    sort(scores, scores + 5);

    int result = 0;
    for (int i = 1; i < 4; i++)
    {
        result += scores[i];
    }
    result *= D;

    cout << result << endl;

    return 0;
}
