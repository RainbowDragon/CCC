/**
 *      CCC 2026 Junior - Snail Path
 *
 */

#include <bits/stdc++.h>

using namespace std;

struct PairHash {
    size_t operator()(const pair<int, int>& p) const {
        return ((long long)p.first << 32) | (p.second & 0xFFFFFFFFFFFFFFFL);
    }
};

int main()
{
    int M;
    cin >> M;

    unordered_set<pair<int, int>, PairHash> visited;
    int x = 0;
    int y = 0;
    visited.insert({x, y});
    
    int count = 0;

    for (int i = 0; i < M; i++)
    {
        int dx = 0;
        int dy = 0;
        
        string str;
        cin >> str;
        char direction = str[0];
        int distance = stoi(str.substr(1));

        if (direction == 'N')
        {
            dy = 1;
        }
        else if (direction == 'S')
        {
            dy = -1;
        }
        else if (direction == 'E')
        {
            dx = 1;
        }
        else 
        {
            dx = -1;
        }

        for (int j = 0; j < distance; j++)
        {
            x += dx;
            y += dy;
            pair<int, int> cur_pos = {x, y};

            if (visited.find(cur_pos) != visited.end())
            {
                count++;
            }
            else
            {
                visited.insert(cur_pos);
            }
        }
    }

    cout << count << endl;

    return 0;
}
