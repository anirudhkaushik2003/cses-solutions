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
    ll a, b;
    cin >> a >> b;
    if (a == 0 && b == 0)
    {
        cout <<  1 << endl;
        return;
    }
    if (a == 0)
    {
        cout <<  0 << endl;
        return;
    }
    if (b == 0)
    {
        cout <<  1 << endl;
        return;
    }
    ll res = 1;
    while (b > 0)
    {
        if ((b & 1) == 1)
        {
            res = res * a;
            if (res > 1e9 + 7)
            {
                res %= (long long)(1e9 + 7);
            }
        }
        a = a * a;
        b >>= 1;
        if (a > 1e9 + 7)
        {
            a %= (long long)(1e9 + 7);
        }
    }
    cout << (res % ((long long)(1e9 + 7))) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}