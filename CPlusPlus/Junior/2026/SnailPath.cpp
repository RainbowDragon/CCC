/**
 *      CCC 2026 Junior - Snail Path
 *
 */

#include <bits/stdc++.h>

using namespace std;

string encode(int x, int y)
{
    return to_string(x) + " " + to_string(y);
}

int main()
{
    int M;
    cin >> M;

    unordered_set<string> set;
    int x = 0;
    int y = 0;
    set.insert(encode(x, y));
    
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
            if (set.find(encode(x,y)) != set.end())
            {
                count++;
            }
            else
            {
                set.insert(encode(x,y));
            }
        }
    }

    cout << count << endl;

    return 0;
}
