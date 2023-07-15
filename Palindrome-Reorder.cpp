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
    string s;
    cin >> s;
    n = s.size();
    vi m(26, 0);
    for (int i = 0; i < n; i++)
    {
        m[(int)(s[i] - 'A')] += 1;
    }
    string ans1 = "", ans2 = "";
    int cond = 0;
    for (auto it : m)
    {
        if (it % 2 == 1)
        {
            if (cond == 0)
            {
                cond = 1;
            }
            else
            {
                cout << "NO SOLUTION" << endl;
                return;
            }
        }
    }
    string middle = "";
    string temp = "";
    for (int j = 0; j < 26; j++)
    {
        if (m[j] % 2 == 1)
        {
            while (m[j]--)
                middle += (char)((int)'A' + j);
            continue;
        }
        for (int i = 0; i < m[j] / 2; i++)
        {
            cout << (char)((int)'A' + j);
        }
    }
    cout << middle;
    for (int i = 25; i >= 0; i--)
    {
        for (int j = 0; j < m[i] / 2; j++)
        {
            cout << (char)((int)'A' + i);
        }
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}