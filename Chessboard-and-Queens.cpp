#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

void sub(int row, vi &flag_col, vi &flag_45, vi flag_135, int &ans, vector<string> &board)
{
    if (row == 8)
    {
        ans++;
        return;
    }
    for (int i = 0; i < 8; i++)
    {
        if (flag_col[i] && flag_45[row + i] && flag_135[row - i + 7] && (board[row][i] != '*'))
        {
            flag_col[i] = flag_45[row + i] = flag_135[row - i + 7] = 0;
            sub(row + 1, flag_col, flag_45, flag_135, ans, board);
            flag_col[i] = flag_45[row + i] = flag_135[row - i + 7] = 1;
        }
    }
}

void solve()
{
    vector<string> board(8);

    for (int i = 0; i < 8; i++)
    {
        cin >> board[i];
    }

    vi flag_col(8, 1), flag_45(15, 1), flag_135(15, 1);
    int ans = 0;
    sub(0, flag_col, flag_45, flag_135, ans, board);
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}