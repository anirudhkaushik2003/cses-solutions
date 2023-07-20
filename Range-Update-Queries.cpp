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

    ll a, b, u;
    int type;
    vll delta(n + 1, 0);

    while (q--)
    {
        cin >> type;
        if (type == 1)
        {
            cin >> a >> b >> u;

            // update
            a--;
            b--;
            delta[a] += u;
            delta[b + 1] -= u;
        }
        else
        {
            // find
            cin >> a;
            a--;
            vll temp = delta;
            for (int i = 1; i <= n; i++)
            {
                temp[i] += temp[i - 1];
            }
            cout << v[a] + temp[a] << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}