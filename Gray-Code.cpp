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
    int t = 1 << n;
    // string s of 0s of size n
    string s = "0";
    vi v(n);
    v[0] = 1;
    vector<bool> flags(n);
    vi prev(n);
    prev[0] = 1;
    flags[0] = true;
    for (int i = 1; i < n; i++)
    {
        s += "0";
        v[i] = v[i - 1] << 1; // multipliers
        prev[i] = v[i];
        flags[i] = true;
    }
    for (int i = 1; i <= t; i++)
    {
        cout << s << endl;
        for (int j = 0; j < n; j++)
        {
            if ((i - prev[j]) % v[j] == 0)
            {
                prev[j] = i;
                if (flags[j])
                {
                    flags[j] = false;
                    v[j] = v[j] << 1;
                }
                s[n - 1 - j] = (s[n - 1 - j] == '0' ? '1' : '0');
            }
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