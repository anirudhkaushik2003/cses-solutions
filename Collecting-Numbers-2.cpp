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
    int n, m;
    cin >> n >> m;

    vi v(n);
    vi pos(n + 2);
    pos[0] = 0;
    pos[n + 1] = n + 2;
    int i = 1;
    for (auto &x : v)
    {
        cin >> x;
        pos[x] = i++;
    }

    int rounds = 1;
    for (int i = 2; i <= n; i++)
    {
        if (pos[i] < pos[i - 1])
        {
            rounds++;
        }
    }
    int a, b, cond1, cond2, temp, cond11, cond22;
    while (m--)
    {
        cin >> a >> b;
        a--, b--;
        // cout << "before: " << v[a] << ": " << pos[v[a]] << " " << v[b] << ": " << pos[v[b]] << endl;

        if (pos[v[a]] > pos[v[a] - 1])
        {
            cond1 = 0;
        }
        else
        {
            cond1 = 1;
        }
        if (pos[v[a]] < pos[v[a] + 1])
        {
            cond11 = 0;
        }
        else
        {
            cond11 = 1;
        }
        if (pos[v[b]] > pos[v[b] - 1])
        {
            cond2 = 0;
        }
        else
        {
            cond2 = 1;
        }
        if (pos[v[b]] < pos[v[b] + 1])
        {
            cond22 = 0;
        }
        else
        {
            cond22 = 1;
        }
        swap(pos[v[a]], pos[v[b]]);
        swap(v[a], v[b]);
        // pos[v[a]] = a + 1;
        // pos[v[b]] = b + 1;

        // cout << "after: " << v[a] << ": " << pos[v[a]] << " " << v[b] << ": " << pos[v[b]] << endl;
        // cout << cond1 << " " << cond11 << " " << cond2 << " " << cond22 << endl;

        if (abs(v[a] - v[b]) == 1)
        {
            if (v[a] > v[b])
            {
                // only check v[a]+1 and v[b]-1
                if (pos[v[a]] > pos[v[a] - 1])
                {
                    if (cond2 == 1)
                    {
                        rounds--;
                    }
                }
                else
                {
                    if (cond2 == 0)
                    {
                        rounds++;
                    }
                }

                if (pos[v[a]] < pos[v[a] + 1])
                {
                    if (cond22 == 1)
                    {
                        rounds--;
                    }
                }
                else
                {
                    if (cond22 == 0)
                    {
                        rounds++;
                    }
                }

                if (pos[v[b]] > pos[v[b] - 1])
                {
                    if (cond1 == 1)
                    {
                        rounds--;
                    }
                }
                else
                {
                    if (cond1 == 0)
                    {
                        rounds++;
                    }
                }
            }
            else
            {
                // only check v[a]-1 and v[b]+1
                if (pos[v[a]] > pos[v[a] - 1])
                {
                    if (cond2 == 1)
                    {
                        rounds--;
                    }
                }
                else
                {
                    if (cond2 == 0)
                    {
                        rounds++;
                    }
                }
                if (pos[v[a]] < pos[v[a] + 1])
                {
                    if (cond22 == 1)
                    {
                        rounds--;
                    }
                }
                else
                {
                    if (cond22 == 0)
                    {
                        rounds++;
                    }
                }
                if (pos[v[b]] < pos[v[b] + 1])
                {
                    if (cond11 == 1)
                    {
                        rounds--;
                    }
                }
                else
                {
                    if (cond11 == 0)
                    {
                        rounds++;
                    }
                }
            }
        }
        else
        {
            if (pos[v[a]] > pos[v[a] - 1])
            {
                if (cond2 == 1)
                {
                    rounds--;
                }
            }
            else
            {
                if (cond2 == 0)
                {
                    rounds++;
                }
            }
            if (pos[v[a]] < pos[v[a] + 1])
            {
                if (cond22 == 1)
                {
                    rounds--;
                }
            }
            else
            {
                if (cond22 == 0)
                {
                    rounds++;
                }
            }
            if (pos[v[b]] > pos[v[b] - 1])
            {
                if (cond1 == 1)
                {
                    rounds--;
                }
            }
            else
            {
                if (cond1 == 0)
                {
                    rounds++;
                }
            }
            if (pos[v[b]] < pos[v[b] + 1])
            {
                if (cond11 == 1)
                {
                    rounds--;
                }
            }
            else
            {
                if (cond11 == 0)
                {
                    rounds++;
                }
            }
        }
        cout << rounds << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    solve();
}