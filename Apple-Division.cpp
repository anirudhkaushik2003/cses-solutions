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
    for (auto &x : v)
    {
        cin >> x;
    }
    sort(v.begin(), v.end());

    ll sum1 = 0,
        sum2 = 0, ans = INT_MAX;
    for (int i = 0; i < (1 << n); i++)
    {
        sum1 = 0, sum2 = 0;
        for (int j = 0; j < n; j++)
        {
            if (i & (1 << j))
            {
                sum1 += v[j];
            }
            else
                sum2 += v[j];
        }
        ans = min(ans, abs(sum1 - sum2));
    }
    cout << ans << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}