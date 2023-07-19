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
    int n, q;
    cin >> n >> q;

    vi v(n);
    for (auto &x : v)
    {
        cin >> x;
    }
    int logn = 0;
    while ((1 << logn) < n)
    {
        logn++;
    }
    vector<vi> m(n, vi(logn + 1));
    for (int i = 0; i < n; i++)
    {
        m[i][0] = v[i];
    }
    for (int j = 1; j <= logn; j++)
    {
        for (int i = 0; i + (1 << j) - 1 < n; i++)
        {
            m[i][j] = min(m[i][j - 1], m[i + (1 << (j - 1))][j - 1]);
        }
    }
    int l, r;
    while (q--)
    {
        cin >> l >> r;
        l--;
        r--;
        int j = log2(r - l + 1);
        cout << min(m[l][j], m[r - (1 << j) + 1][j]) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}