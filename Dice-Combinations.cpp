#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

ll combinations(int n, vector<long long> &dp)
{
    if (dp[n] != -1)
    {
        return dp[n];
    }
    if (n == 1 || n == 0)
    {
        return 1;
    }
    long long ret = 0;
    for (int i = 1; i <= 6 && i <= n; i++)
    {
        ret += combinations(n - i, dp);
        if (ret > 1e9 + 7)
        {
            ret %= (long long)(1e9 + 7);
        }
    }
    if (ret > 1e9 + 7)
    {
        ret %= (long long)(1e9 + 7);
    }
    dp[n] = ret;
    return dp[n];
}
void solve()
{
    int n;
    cin >> n;
    vector<long long> dp(n + 1, -1);
    cout << combinations(n, dp) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}