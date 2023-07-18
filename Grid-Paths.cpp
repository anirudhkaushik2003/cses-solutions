#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

vi dR = {-1, 0, 1, 0};
vi dC = {0, -1, 0, 1};
vi p(48);

int sub(vector<vector<bool>> &board, int curR, int curC, int pathIdx)
{

    if ((!board[curR][curC + 1] && !board[curR][curC - 1]) && (board[curR + 1][curC] && board[curR - 1][curC]))
    {
        return 0;
    }
    if ((board[curR][curC + 1] && board[curR][curC - 1]) && (!board[curR + 1][curC] && !board[curR - 1][curC]))
    {
        return 0;
    }

    if (curC == 1 && curR == 7)
    {
        if (pathIdx == 48)
        {
            return 1;
        }
        return 0;
    }
    if (pathIdx == 48)
    {
        return 0;
    }
    int ret = 0;
    board[curR][curC] = true;
    // try all four paths
    if (p[pathIdx] < 4)
    {
        int nextR = curR + dR[p[pathIdx]];
        int nextC = curC + dC[p[pathIdx]];

        if (!board[nextR][nextC])
        {

            ret += sub(board, nextR, nextC, pathIdx + 1);
        }
    }
    else if ((curC > 2) && board[curR][curC - 2] && (board[curR + 1][curC - 1] || board[curR - 1][curC - 1]) && !board[curR][curC - 1])
    {
        int nextR = curR;
        int nextC = curC - 1;

        ret += sub(board, nextR, nextC, pathIdx + 1);
    }
    else if ((curC < 6 )&& board[curR][curC + 2] && (board[curR + 1][curC + 1] || board[curR - 1][curC + 1]) && !board[curR][curC + 1])
    {
        int nextR = curR;
        int nextC = curC + 1;

        ret += sub(board, nextR, nextC, pathIdx + 1);
    }
    else if ((curR > 2) && board[curR - 2][curC] && (board[curR - 1][curC - 1]) && !board[curR - 1][curC])
    {
        int nextR = curR - 1;
        int nextC = curC;

        ret += sub(board, nextR, nextC, pathIdx + 1);
    }
    else
    {

        for (int i = 0; i < 4; i++)
        {
            int nextR = curR + dR[i];
            int nextC = curC + dC[i];

            if (!board[nextR][nextC])
            {

                ret += sub(board, nextR, nextC, pathIdx + 1);
            }
        }
    }
    board[curR][curC] = false;
    return ret;
}
void solve()
{
    string s;
    cin >> s;
    for (int i = 0; i < 48; i++)
    {
        if (s[i] == 'D')
        {
            p[i] = 2;
        }
        else if (s[i] == 'U')
        {
            p[i] = 0;
        }
        else if (s[i] == 'L')
        {
            p[i] = 1;
        }
        else if (s[i] == 'R')
        {
            p[i] = 3;
        }
        else
        {
            p[i] = 4;
        }
    }

    vector<vector<bool>> grid(9, vector<bool>(9, false));
    for (int i = 0; i < 9; i++)
    {
        grid[0][i] = true;
        grid[8][i] = true;
        grid[i][0] = true;
        grid[i][8] = true;
    }

    int ans = 0;
    ans = sub(grid, 1, 1, 0);
    cout << ans << endl;
}

int main()
{

    solve();
}