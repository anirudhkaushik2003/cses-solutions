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

    vll v(n);
    for (auto &x : v)
    {
        cin >> x;
    }

    vll pre(n + 1);
    pre[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        pre[i] = pre[i - 1] ^ v[i - 1];
    }
    int a, b;
    while (q--)
    {
        cin >> a >> b;
        cout << (pre[b] ^ pre[a - 1]) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}