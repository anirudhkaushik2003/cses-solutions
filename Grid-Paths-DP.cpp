#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

void solve()
{
    int n;
    cin >> n;
    vector<string> board(n);
    for (int i = 0; i < n; i++)
    {
        cin >> board[i];
    }

    vector<long long> prev(n);
    vector<long long> cur(n);
    prev[0] = (board[0][0] == '*' ? 0 : 1);
    for (int i = 1; i < n; i++)
    {
        if (board[0][i] == '*')
        {
            prev[i] = 0;
        }
        else
        {
            prev[i] = prev[i - 1];
        }
    }
    cur = prev;

    
    for (int i = 1; i < n; i++)
    {
        cur[0] = (board[i][0] == '*' ? 0 : prev[0]);
        for (int j = 1; j < n; j++)
        {
            if (board[i][j] == '*')
            {
                cur[j] = 0;
            }
            else
                cur[j] = cur[j - 1] + prev[j];
                if(cur[j] >= (long long) 1e9+7)
                {
                    cur[j] = cur[j]%((long long) 1e9+7);
                }
        }
        prev = cur;
    }
    cout << (cur[n - 1]%(long long)(1e9+7)) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}