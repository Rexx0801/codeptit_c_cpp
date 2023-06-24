#include <bits/stdc++.h>
using namespace std;
int n, start_row, start_col, dest_row, dest_col, vs[105][105];
char a[105][105];
void init()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin.ignore();
        string str;
        cin >> str;
        for (int j = 0; j < n; j++)
            a[i][j] = str[j];
    }
    cin >> start_row >> start_col >> dest_row >> dest_col;
    memset(vs, 0, sizeof(vs));
    vs[start_row][start_col] = 1;
}
int bfs()
{
    queue<pair<int, int>> q;
    q.push({start_row, start_col});
    while (!q.empty())
    {
        int row = q.front().first;
        int col = q.front().second;
        q.pop();
        for (int i = row - 1; i >= 0; i--)
        {
            if (a[i][col] == 'X')
                break;
            else
            {
                if (vs[i][col] == 0)
                {
                    vs[i][col] = vs[row][col] + 1;
                    q.push({i, col});
                }
            }
        }
        for (int i = row + 1; i < n; i++)
        {
            if (a[i][col] == 'X')
                break;
            else
            {
                if (vs[i][col] == 0)
                {
                    vs[i][col] = vs[row][col] + 1;
                    q.push({i, col});
                }
            }
        }
        for (int i = col - 1; i >= 0; i--)
        {
            if (a[row][i] == 'X')
                break;
            else
            {
                if (vs[row][i] == 0)
                {
                    vs[row][i] = vs[row][col] + 1;
                    q.push({row, i});
                }
            }
        }
        for (int i = col + 1; i < n; i++)
        {
            if (a[row][i] == 'X')
                break;
            else
            {
                if (vs[row][i] == 0)
                {
                    vs[row][i] = vs[row][col] + 1;
                    q.push({row, i});
                }
            }
        }
        if (vs[dest_row][dest_col] != 0)
            return vs[dest_row][dest_col] - 1;
    }
}
void solve()
{
    cout << bfs() << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        init();
        solve();
    }
    return 0;
}
