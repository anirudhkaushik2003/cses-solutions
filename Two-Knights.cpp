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
    cout << 0 << endl;
    for (ll i = 2; i <= n; i++)
    {
        cout << ((i * i) * ((i * i) - 1)) / 2 - (4 * (i - 1) * (i - 2)) << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}