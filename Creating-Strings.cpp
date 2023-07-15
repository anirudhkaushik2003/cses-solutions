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
    string s;
    cin >> s;
    int n = s.size();

    sort(s.begin(), s.end());

    string t = s;
    int ans = 1;
    for (int i = 2; i <= n; i++)
    {
        ans *= i;
    }
    unordered_map<char, int> m;
    for (int i = 0; i < n; i++)
    {
        m[s[i]]++;
    }
    for (auto it : m)
    {
        int temp = 1;
        for (int i = 2; i <= it.second; i++)
        {
            temp *= i;
        }
        ans /= temp;
    }
    cout << ans << endl;
    cout << s << endl;
    next_permutation(t.begin(), t.end());
    while (t != s)
    {
        cout << t << endl;
        next_permutation(t.begin(), t.end());
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}