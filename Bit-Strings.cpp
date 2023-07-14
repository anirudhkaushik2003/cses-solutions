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

    long long ans = 1;
    if (n < 32)
    {
        ans = ans << n;
        cout << ans << endl;
        return;
    }
    ans = ans << 32;
    ans = ans % (long long)(1e9 + 7);
    n-= 32;
    while (n--)
    {
        ans = ans << 1;
        ans = ans % (long long)(1e9 + 7);
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