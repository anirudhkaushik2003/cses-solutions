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
    ll x, y;
    cin >> y >> x;
    if (y == x)
    {
        cout << (y * (y - 1)) + 1 << endl;
    }
    if (y > x)
    {
        ll diag = (y * (y - 1)) + 1;
        if (y & 1 == 1)
        {
            ll ans = diag - (y - x);
            cout << ans << endl;
        }
        else
        {
            ll ans = diag + (y - x);
            cout << ans << endl;
        }
    }
    if (x > y)
    {
        ll diag = (x * (x - 1)) + 1;
        if (x & 1 == 1)
        {
            ll ans = diag + (x - y);
            cout << ans << endl;
        }
        else
        {
            ll ans = diag - (x - y);
            cout << ans << endl;
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
        solve();
}