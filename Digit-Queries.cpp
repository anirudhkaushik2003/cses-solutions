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
    int q;
    cin >> q;
    vll v(q);
    for (auto &k : v)
    {
        cin >> k;
    }
    ll n, temp, ans, temp2;
    for (int i = 0; i < q; i++)
    {
        ans = 0;
        if (v[i] < 10)
        {
            cout << v[i] << endl;
            continue;
        }
        temp = 9;
        n = 1;
        while (ans + (temp * n) < v[i])
        {
            ans += temp * n;
            temp *= 10;
            n++;
        }
        temp2 = pow(10, n - 1);
        temp2 += (((v[i] - ans) / n) - 1);

        ll rem = (v[i] - ans) % n;

        if (rem == 0)
        {
            cout << temp2 % 10 << endl;
        }
        else
        {
            temp2++;
            string s = to_string(temp2);
            cout << s[rem - 1] << endl;
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