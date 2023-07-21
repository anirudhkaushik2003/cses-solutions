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

    vi v(n);
    vi pos(n + 1);
    pos[0] = 0;
    int i = 1;
    for (auto &x : v)
    {
        cin >> x;
        pos[x] = i++;
    }

    vi dp(n + 1);
    int rounds = 1;
    for (int i = 2; i <= n; i++)
    {
        if (pos[i] < pos[i - 1])
        {
            rounds++;
        }
    }
    cout << rounds << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}